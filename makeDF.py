#!/usr/bin/env python
# -*- coding: utf-8 -*-
from subprocess import call
import argparse
import sys
import os
import glob
import matplotlib.pyplot as plt
import pandas as pd

COLUMNS = ['Flname','FnName','Art','Max','Unq','Len','OT','Class','ObfStat']

def constructDF(TARGET,THRESH,FUNCTION,CLASS,STAT):
    print('Opening '+os.path.basename(TARGET)+' and writing into DataFrame file...',end='')

    ## Reading probability file
    print(TARGET)
    SRC = pd.read_table(TARGET,header=None,sep=',')
    SRC.columns = ['fnName','nCmd','prob','sprsl','len','idx']
    SRC['ot'] = SRC['sprsl'] > THRESH
    SRC['flName'] = os.path.basename(TARGET)

    df = []
    for i, row in SRC.iterrows():
        if '<f>' in row['nCmd']:
            start = i
            unq = []
        if start is not None: unq += [ins for ins in row['nCmd'].split()]
        if '</f>' in row['nCmd']:
            unq.remove('<f>');  unq.remove('</f>')
            Class,ObfStat = CLASS,STAT
            if FUNCTION[-1] != '*':
                Class,ObfStat = 'norm','norm'
                for f in FUNCTION:
                    if str(f) == str(SRC['fnName'][i]): Class,ObfStat = CLASS,STAT
            toWrite = [str(row['flName']), str(row['fnName']),
                       str(SRC.loc[start:i,'sprsl'].sum()),
                       str(SRC.loc[start:i,'sprsl'].max()),
                       str(len(list(set(unq)))),
                       str(row['len']),
                       str(SRC.loc[start:i,'ot'].sum()),
                       Class,ObfStat]
            df.append(toWrite)
            start = None
    print('finished!')
    return df


def main(av):
    call(['mkdir','-p','dfs/'])

    DF = [];    num = 1
    if os.path.isfile(av.target):
        DF = constructDF(av.target,av.thresh,av.function,av.classLab,av.statLab)
        combName = os.path.basename(av.target)
    elif os.path.isdir(av.target):
        if av.target[-1] is not '/': av.target += '/'
        combName = av.target.rsplit('/',2)[-2]
        targets = glob.glob(av.target+'*')
        for target in targets:
            print('(',num,'/',len(targets),'):',end='')
            eachDF = constructDF(target,av.thresh,av.function,av.classLab,av.statLab)
            DF += eachDF
            if av.each:
                dfname = 'dfs/'+os.path.basename(target)+'DF'+str(av.thresh)+'.csv'
                pd.DataFrame(eachDF,columns=COLUMNS).to_csv(dfname,index=False)
            num += 1
    else: sys.exit('Unknown target.')

    ## Output DF / Combined DF
    if av.outDF is not None: av.outDF = 'dfs/'+''.join(av.outDF)+'.csv'
    else: av.outDF = 'dfs/'+combName+'DF'+str(av.thresh)+'.csv'
    pd.DataFrame(DF,columns=COLUMNS).to_csv(av.outDF,index=False)
    if av.graph: drawGraph(av.outDF,av.graph)


def drawGraph(dfname,axes):
    df = pd.read_table(dfname,sep=',')

    for axis in axes:
        x,y = axis.split(',')
        print('Drawing graph: X axis=',x,'Y axis=',y,' ...',flush=True,end='')
        plt.cla()
        plt.plot(df[x],df[y],'o',alpha=0.3)
        plt.xlabel(x);  plt.ylabel(y)
        plt.legend(['n: '+str(df.shape[0])],loc=4)
        plt.grid(True)
        figname = dfname[:-4]+'_'+x+'_'+y+'.png'
        plt.savefig(figname,dpi=200)
        print('finished!')


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description='''
        Create dataframe and graph for stealth evaluation using assembly instructions
        n-gram probability (those calculated using code2problist.py) data.
        Generated dataframes will be stored in the same directory as this script inside
        directory named dfs/ (will be created if not exists). If target is a directory,
        all files inside the directory will become target file, and one combined
        dataframe will be created. Any graph created during the process will also be
        stored on dfs/.
                                    *** NOTE ***
        No need to write file extension when using -d option. Output dataframe's
        extension will be Comma Separated Value [.csv] and graph extension will be
        [.png]. When using -r option, it is necessary to include the extension.''')
    parser.add_argument('target', help='target')
    parser.add_argument('thresh', type=float, help='threshold')
    parser.add_argument('-d','--outDF', type=str, nargs=1, metavar='DF_name',
                        help='Rename output dataframe (default: target_DF[threshold].csv) file.'\
                             'If target is a directory, will rename only the combined dataframe.')
    parser.add_argument('-g','--graph', nargs='+', metavar='x,y',
                        help='Create graph file with given x,y axis. Usable axis is Art, Max,'\
                             ' Unq, Len, and OT. If target is a directory, create a combined graph.'\
                             ' Ex. [-g Len,Art Len,Unq] will create two graph, both using Len as x axis'\
                             ' while one graph uses Art while the other uses Unq as its y axis.')
    parser.add_argument('-e','--each', action='store_true',
                        help='Make dataframe for each file in target directory. Will be ignored if target is not a directory.')
    parser.add_argument('-c','--classLab', action='store',type=str, nargs=1, metavar='ClassLabel', default='norm',
                        help='Renaming the class label. (default: norm)')
    parser.add_argument('-s','--statLab',choices=['obfs','norm'], default='norm',
                        help='Obfuscation status. (default: norm)')
    parser.add_argument('-f','--function',type=str, metavar='funcName1,... ', nargs=1, default='*',
                        help='Function name (comma Separated) to give label. (default: *)')
    parser.add_argument('--version', action='version', version='%(prog)s 2.2')
    args = parser.parse_args()
    #TODO: eliminates invokation cases like -f a,'*'
    args.function = args.function[-1].split(',')
    args.classLab = ''.join(args.classLab)
    main(args)
