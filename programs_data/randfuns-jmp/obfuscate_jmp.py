
import os
import re
import argparse
from copy import copy

from elftools.elf.elffile import ELFFile
import capstone

jmpcoms =  ['jmp',
            'jcxz', 'jecxz',
            'ja', 'jna', 'jae', 'jnae',
            'jb', 'jnb', 'jbe', 'jnbe',
            'jg', 'jng', 'jge', 'jnge',
            'jl', 'jnl', 'jle', 'jnle',
            'jp', 'jnp', 'jpe', 'jpo',
            'jc', 'jnc',
            'je', 'jne',
            'jo', 'jno',
            'js', 'jns',
            'jz', 'jnz']
jmpre = r"\t(" + "|".join(jmpcoms) + r")\t(.+?)\n"

def insert2str(index, s, src):
    return src[:index] + s + src[index:]

def insertLabels(src, jmpbytes):
    cnt = 0
    ss = copy(src)
    jmp = re.compile(jmpre)
    sb = ""
    while jmp.search(ss) != None:
        print("{}\t{}".format(*jmp.search(ss).group(1, 2)))
        i, j = jmp.search(ss).span()
        op, label = jmp.search(ss).group(1, 2)
        target = "TARGET{}".format(cnt)
        opcode = jmpbytes[cnt][0]
        n = len(jmpbytes[cnt])
        ins = "".join([f"\tmovb\t$0x00, {target}+{i}\n" for i in range(n)]) \
            + f"{target}:\n"
        ss2 = insert2str(i, ins, ss)
        sb += ss2[:j + len(ins)]
        ss = ss2[j + len(ins):]
        cnt += 1
    return sb + ss, cnt

def getBytesJmp(path):
    elf = ELFFile(open(path, "rb"))
    assert elf.header.e_machine in ["EM_X86_64", "EM_386"]
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64 if elf.header.e_machine == "EM_X86_64" else capstone.CS_MODE_32)
    md.detail = True
    text = elf.get_section_by_name(".text")
    return [[f'{b:02x}' for b in insn.bytes] for insn in md.disasm(text.data(), text.header.sh_addr) if insn.mnemonic in jmpcoms]

def replaceCodeJmp(src, cnt, jmpbytes):
    ss = copy(src)
    for i in range(cnt):
        tgt = "".join([fr"\tmovb\t\$0x00, TARGET{i}\+{j}\n" for j in range(len(jmpbytes[i]))]) \
            + fr"TARGET{i}:\n" \
            + jmpre
        dst = "".join([fr"\tmovb\t$0x{jmpbytes[i][j]}, TARGET{i}+{j}\n" for j in range(len(jmpbytes[i]))]) \
            + fr"TARGET{i}:\n" \
            + "".join([r"\tnop\n" for _ in range(len(jmpbytes[i]))])
        jmp = re.compile(tgt)
        if jmp.search(ss) == None:
            src = re.sub(fr"(\tmovb\t\$0x00, TARGET{i}\+\d\n)+TARGET{i}:\n",
                        "".join([fr"\tmovb\t$0x00, TARGET{i}+{j}\n" for j in range(len(jmpbytes[i]))]) \
                        + fr"TARGET{i}:\n", src)
            return src, True
        ss = jmp.sub(dst, ss)
    return ss, None

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("file", nargs=None)
    parser.add_argument("-m32", action="store_true", default=False)
    args = parser.parse_args()

    cc = "gcc -O0" + (" -m32" if args.m32 else "")

    path = args.file
    name, ext = os.path.splitext(path)
    assert ext in ['.s', '.c']
    if ext == '.c':
        asmfile = f"{name}.s"
        assert os.system(f'{cc} -S {path} -o {asmfile}') == 0
        path = asmfile

    directory = os.path.dirname(path)
    filename = os.path.basename(path)
    pathObj = f"{name}.o"
    assert os.system(f'{cc} -c {path} -o {pathObj}') == 0
    jmpbytes = getBytesJmp(pathObj)

    tmpfile = os.path.join(directory, f"tmp_{filename}")
    tmpfileObj = f"{tmpfile[:-2]}.o"
    resultfile = os.path.join(directory, f"result_{filename}")

    with open(path, "r") as f:
        txt = f.read()
    label_writed, cnt = insertLabels(txt, jmpbytes)

    loop = True
    while loop:
        with open(tmpfile, "w") as f:
            f.write(label_writed)
        assert os.system(f'{cc} -c {tmpfile} -o {tmpfileObj}') == 0
        jmpbytes = getBytesJmp(tmpfileObj)
        processed, err = replaceCodeJmp(label_writed, cnt, jmpbytes)
        if err == None:
            loop = False
        else:
            label_writed = processed

    with open(resultfile, "w") as f:
        f.write(processed)

    exefile = resultfile[:-2]
    assert os.system(f'{cc} {resultfile} -o {exefile}') == 0

if __name__ == '__main__':
    main()
