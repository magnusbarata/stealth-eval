#!/usr/bin/env python
# -*- coding: utf-8 -*-
import argparse
import glob
import sys
import os
import pandas as pd
import matplotlib.pyplot as plt

COLUMNS = ['OT','Art','Max','Unq','Len']

def plot(df,axarr,label,marker,size):
    assert len(axarr.reshape(-1)) is 4, 'Not enough axis is given.'
    for i,ax in enumerate(axarr.reshape(-1)):
        ax.plot(df[COLUMNS[-1]],df[COLUMNS[i]],marker,alpha=0.2,label=label,ms=size,)
        ax.set_xlabel(COLUMNS[-1]); ax.set_ylabel(COLUMNS[i])
        ax.grid(True)
    return axarr

def main(av):
    if os.path.isfile(av.df1) and os.path.isfile(av.df2):
        data1 = pd.read_table(av.df1,sep=',',usecols=COLUMNS)
        data2 = pd.read_table(av.df2,sep=',',usecols=COLUMNS)
        graph,axarr = plt.subplots(2,2,figsize=(10,10))
        print('+++++++++++++',os.path.basename(av.df1),'+++++++++++++')
        print(data1.describe());    plot(data1,axarr,os.path.basename(av.df1)[:5],'bo',None)
        print('+++++++++++++',os.path.basename(av.df2),'+++++++++++++')
        print(data2.describe());    plot(data2,axarr,os.path.basename(av.df2)[:5],'ro',None)
        flName = 'cmp/'+os.path.basename(av.df1)[:10]+'_vs_'+os.path.basename(av.df2)[:10]
        graph.legend(loc=(0.4,0.9),ncol=2, borderaxespad=0.)
        plt.savefig(flName,dpi=200)
    else: sys.exit('Unknown dataframe file(s).')

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Compare dataframes.")
    parser.add_argument('df1',help='first dataframe file')
    parser.add_argument('df2',help='second dataframe file')
    args = parser.parse_args()
    main(args)
