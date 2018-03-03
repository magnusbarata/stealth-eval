# -*- coding: utf-8 -*-
import pandas as pd

COLUMNS = ['Art','OT','Max','Unq','Len','Class','ObfStat']
DFS = {}

DFS['opc'] = { 'norm':pd.read_table('dfs/centossys-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'orig':pd.read_table('dfs/randfuns-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'enca':pd.read_table('dfs/enca-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS)
             }

def numStatLabel(dfs):
    for name,df in dfs.items():
        df['ObfStat'] = df['ObfStat'].map({'norm': 1, 'obfs': -1})
