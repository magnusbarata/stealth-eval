#!/usr/bin/env python
# -*- coding: utf-8 -*-
from subprocess import call,Popen,PIPE
import fileinput
import argparse
import glob

tig_dir = 'programs_data/randfuns/src_tig/'

def obfuscatable(progname,timechk,errOut):
    tmp = open('programs_data/randfuns/tmp.c','w')
    print('#include <stdio.h>',file=tmp)
    print('#include <stdlib.h>',file=tmp)
    with fileinput.input(progname) as f:
        inMain, inFunc, inMegaInit = False, False, False
        closeCurlCount = 0
        for line in f:
            if line == 'int main(int argc , char *argv[] ) \n': inMain = True
            elif line == 'void megaInit(void) \n': inMegaInit = True
            elif 'void function_1(' in line:
                if line[-2:] == ';\n': print(line,end='',file=tmp)
                elif line[-2:] == ' \n': inFunc = True

            if inMegaInit:
                if line == '}\n': closeCurlCount += 1
                if closeCurlCount is 2: inMegaInit = False
            elif inMain or inFunc:
                if line == '  megaInit();\n': continue
                elif 'failed |= time___0' in line:
                    line = line.split(' ')
                    line[-2] = '<'
                    line = ' '.join(line)
                print(line,end='',file=tmp)
    tmp.close()

    ## Edit to enable "You win!" message
    fname = 'programs_data/randfuns/src/'+progname[len(tig_dir):]
    call(['gcc','programs_data/randfuns/tmp.c'],stderr=PIPE)
    out,err = Popen(['./a.out','42','42','42','42'],stdin=PIPE,stdout=PIPE,
                     stderr=PIPE).communicate(input=b'secret\n')
    key = out.decode('utf-8').split('\n')
    fin = open('programs_data/randfuns/src/'+progname[len(tig_dir):],'w')
    with fileinput.input('programs_data/randfuns/tmp.c') as f:
        for line in f:
            if not timechk and 'failed |= time___0' in line:
                line = line.split(' ')
                line[-2] = '>'
                line = ' '.join(line)
            elif '  if (output[0] == ' in line:
                line = line.split(' ')
                line[3] = '(output[1]'
                if line[-2][-2] == 'L': line[-2] = key[1]+'UL)'
                elif line[-2][-2] == 'U': line[-2] = key[1]+'U)'
                elif 'short' in line[-2]: line[-2] = 'short)'+key[1]+')'
                elif 'char' in line[-2]: line[-2] = 'char)'+key[1]+')'
                line = ' '.join(line)
            print(line,end='',file=fin)
    fin.close()

    print('\tcompiling... ',end='',flush=True)
    binname = 'programs_data/randfuns/bin/'+fname[27:-2]
    call(['gcc',fname,'-o',binname],stderr=errOut)

    ## Checking whether edited result is the same as source
    if timechk:
        out,err = Popen([binname,'42','42','42','42'],stdin=PIPE,stdout=PIPE,
                         stderr=PIPE).communicate(input=b'secret\n')
        assert 'You win!' in out.decode('utf-8').split('\n')[0], 'Setting key fails.'


def controlStruct(n):
    assert type(n) is str, 'n must be string type.'
    structs = [ #'(if (bb '+n+') (bb '+n+'))',
                #'(if (if (bb '+n+') (bb '+n+')) (bb '+n+'))',
                #'(if (if (bb '+n+') (bb '+n+')) (if (bb '+n+') (bb '+n+')))',
                #'(if (if (if (bb '+n+') (bb '+n+')) (bb '+n+')) (bb '+n+'))',
                #'(for (bb '+n+'))',
                '(if (bb '+n+') (for (bb '+n+')))']
    return structs


def main(av):
    blk_sizes = [1,2]
    forbounds = ['constant']#,'boundedInput','boundedAny']
    failkinds = ['message','abort','segv'] # Default set to abort
    seeds = [1]#,2,7]
    types = ['char']#,'short','int','long']
    oprs = [#'PlusA,MinusA,Lt,Gt,Le,Ge,Eq,Ne',
            #'PlusA,MinusA,Mult,Div,Mod,Lt,Gt,Le,Ge,Eq,Ne',
            #'Shiftlt,Shiftrt,BAnd,BXor,BOr,Lt,Gt,Le,Ge,Eq,Ne',
            '*']

    if av.verbose: errOut = None
    else: errOut = PIPE

    call(['mkdir','-p','programs_data/randfuns/src/'])
    call(['mkdir','-p','programs_data/randfuns/bin/'])
    if not av.skip:
        print('====================++++++ generating randfuns ++++++====================')
        if av.apple: ENV = '--Environment=x86_64:Darwin:Clang:5.1'
        else: ENV = '--Environment=x86_64:Linux:Gcc:4.6'
        call(['touch','programs_data/randfuns/empty.c']);  num = 1
        call(['mkdir','-p',tig_dir])

        for blk in blk_sizes:
            structs = controlStruct(str(blk))
            for struct in structs:
                for forbound in forbounds:
                    for typ in types:
                        for seed in seeds:
                            for opr in oprs:
                                fname = tig_dir+str(seed)+'_'+str(blk)+'_'+str(structs.index(struct))+\
                                        '_'+forbound+'_'+typ+'_'+str(oprs.index(opr))+'.c'
                                fnum = len(seeds)*len(blk_sizes)*len(structs)*len(forbounds)*len(types)*len(oprs)
                                print(num,'/',fnum,' : generating',fname[len(tig_dir):])
                                call(['tigress',ENV,'--Seed='+str(seed),
                                      '--Transform=RandomFuns',
                                      '--RandomFunsName=function',
                                      '--RandomFunsBasicBlockSize='+str(blk),
                                      '--RandomFunsControlStructures='+struct,
                                      '--RandomFunsForBound='+forbound,
                                      '--RandomFunsType='+typ,
                                      '--RandomFunsOperators='+opr,
                                      '--RandomFunsFailureKind='+failkinds[1],
                                      '--RandomFunsPassword=secret',
                                      '--RandomFunsPasswordCheckCount=1',
                                      '--RandomFunsPointTest=true',
                                      '--RandomFunsTimeCheckCount=1',
                                      '--RandomFunsActivationCodeCheckCount=1',
                                      'programs_data/randfuns/empty.c',
                                      '--out='+fname],stderr=errOut)

                                print('\tmaking obfuscatable',fname[len(tig_dir):],'...')
                                obfuscatable(fname,av.timechk,errOut)
                                print('finished!'); num += 1

    if av.skip:
        print('=================++++++ creating obfuscatables ++++++=================')
        programs = glob.glob(tig_dir+'*.c')
        num = 1
        for prog in programs:
            print(num,'/',len(programs),' : editing',prog[len(tig_dir):],'...')
            obfuscatable(prog,av.timechk,errOut)
            print('finished!'); num += 1

    call(['rm','-f','programs_data/randfuns/tmp.c'])
    call(['rm','-f','a.out'])


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description='''Generate programs using Tigress RandomFuns Transformation.''')
    parser.add_argument('--apple',action='store_true',
                        help='Set --Environment=x86_64:Darwin:Clang:5.1 (default --Environment=x86_64:Linux:Gcc:4.6)')
    parser.add_argument('--skip',action='store_true',help='Skip generating RandomFuns programs.')
    parser.add_argument('--timechk',action='store_false',help='Disabling timecheck on edited programs.')
    parser.add_argument('--verbose',action='store_true',help='Enabling tigress and gcc warnings.')
    parser.add_argument('--version',action='version',version='%(prog)s 1.0')
    args = parser.parse_args()
    main(args)
