#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import subprocess
import argparse
import glob

def main(args):
    if args.dir[-1] is not '/': args.dir += '/'
    csvpath = args.dir.rsplit('/',2)[0]+'/dumpcsv/'
    probpath = args.dir.rsplit('/',2)[0]+'/'+args.mgran[:5]+'_'+os.path.basename(args.corpus)+'/'

    print("++++++++++++++++++    Dumping IDA CSVs    ++++++++++++++++++")
    if args.ext is None:
        dumpcmd = ['python2','../code-analysis/dump/repeatdump.py',args.dir]
    else:
        dumpcmd = ['python2','../code-analysis/dump/repeatdump.py',args.dir,'-ext',args.ext]
    if args.ext is not False:
        subprocess.call(dumpcmd)
        subprocess.call(['mkdir','-p',csvpath])
        f_mv = glob.glob(args.dir+'*csv')
        for f in f_mv: subprocess.call(['mv',f,csvpath])

    print("++++++++++++++++++    Calculating Probabilities    ++++++++++++++++++")
    csvfiles = glob.glob(csvpath+'*csv')
    subprocess.call(['mkdir','-p',probpath])
    for i,f in enumerate(csvfiles):
        print('(',i+1,'/',len(csvfiles),'): Processing ',f)
        with open(probpath+os.path.basename(f)[:-8]+'prob'+str(args.ngram),'w') as out:
            subprocess.call(['python2','../code-analysis/code2problist.py','-mgran',args.mgran,f,args.corpus,str(args.ngram)],stdout=out)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('dir',help='target directory')
    parser.add_argument('corpus',help='corpus file name')
    parser.add_argument('-ext', nargs='?', default=False, const=None,
                        help='Target extension (e.g. exe)')
    parser.add_argument('-ngram', action='store', default=3,type=int, help='(N)-gram')
    parser.add_argument('-mgran', default='OPRTYPE',
                        help='Granularity level. Referred only if the input file is dumpcsv. Ignore if the input file is code file.')
    parser.add_argument('-V','--version',action='version',version='%(prog)s 1.0')
    args = parser.parse_args()
    main(args)
