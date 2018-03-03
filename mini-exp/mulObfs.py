#!/usr/bin/env python
# -*- coding: utf-8 -*-
from subprocess import call,Popen,PIPE
import obfsdef as od
import argparse
import glob
import os

def chkObfs():
    out,err = Popen(['./a.out','42','42','42','42'],stdin=PIPE,stdout=PIPE,
                     stderr=PIPE).communicate(input=b'secret\n')
    assert 'You win!' in out.decode('utf-8').split('\n')[0], 'Obfuscated program`s execution result differ from original program.'


def main(av):
    if av.target[-1] is not '/': args.target += '/'
    if av.dest[-1] is not '/': args.dest += '/'
    binpath = args.dest+'bin/'
    call(['mkdir','-p',av.dest])
    call(['mkdir','-p',binpath])

    if av.apple: ENV = '--Environment=x86_64:Darwin:Clang:5.1 '+od.TIGRESS_HOME+'/apple.h -include'
    else: ENV = '--Environment=x86_64:Linux:Gcc:4.6'

    if av.verbose: errOut = None
    else: errOut = PIPE

    ## Appending ENV
    for method in od.METHODS:
        for e in ENV.split(' '): od.METHODS[method].insert(1,e)

    cfiles = glob.glob(av.target+'*.c')
    num = 1
    for cfile in cfiles:
        print('(',num,'/',len(cfiles),') Obfuscating',os.path.basename(cfile),':')
        OUTFILE = av.dest+os.path.basename(cfile)
        for method in od.METHODS:
            ## Obfuscating
            print('  '+method+'-obfuscate ...',flush=True,end='')
            od.METHODS[method].append('--out='+OUTFILE[:-2]+'_'+method+'.c')
            od.METHODS[method].append(cfile)
            call(od.METHODS[method],stderr=errOut)

            if av.check: chkObfs()
            if av.ext is not False:
                call(['mv','a.out',binpath+os.path.basename(cfile)[:-2]+'_'+method+av.ext])

            od.METHODS[method] = od.METHODS[method][:-2] # Delete appended cfile, --out...
            print('finished!')
        num += 1


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description='''
            Obfuscate multiple programs on target directory with methods defined
            on obfsdef.py.''')
    parser.add_argument('target',help='target directory')
    parser.add_argument('dest',help='destination directory')
    parser.add_argument('--apple',action='store_true',
                        help='Set --Environment=x86_64:Darwin:Clang:5.1 (default --Environment=x86_64:Linux:Gcc:4.6)')
    parser.add_argument('--ext', nargs='?', default=False, const='',
                        help='Output binary file extension (e.g. .exe, .bin, .out)')
    parser.add_argument('--check',action='store_true',
                        help='Enable checking the obfuscated file. *Only useful for programs generated using gen_orig.py')
    parser.add_argument('--verbose',action='store_true',help='Enabling tigress messages.')
    parser.add_argument('--version',action='version',version='%(prog)s 1.0')
    args = parser.parse_args()
    main(args)
