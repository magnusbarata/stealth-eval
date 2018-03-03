# -*- coding: utf-8 -*-
import pandas as pd

COLUMNS = ['Art','OT','Max','Unq','Len','Class','ObfStat']
DFS = {}

DFS['opc'] = { 'norm':pd.read_table('../dfs/centossys-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'orig':pd.read_table('../dfs/randfuns-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'split':pd.read_table('../dfs/split-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'jump':pd.read_table('../dfs/jmp-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'aaa':pd.read_table('../dfs/aaa-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'addop':pd.read_table('../dfs/addop-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'vir':pd.read_table('../dfs/vir-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'flat':pd.read_table('../dfs/flat-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'encl':pd.read_table('../dfs/encl-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS),
               'enca':pd.read_table('../dfs/enca-OPCOD_centos_combined_opcode_func_o3.lmDF7.42.csv',sep=',',usecols=COLUMNS)
             }
"""
DFS['xrf'] = { 'norm':pd.read_table('../dfs/centossys-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'orig':pd.read_table('../dfs/randfuns-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'split':pd.read_table('../dfs/split-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'jump':pd.read_table('../dfs/jmp-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'aaa':pd.read_table('../dfs/aaa-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'addop':pd.read_table('../dfs/addop-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'vir':pd.read_table('../dfs/vir-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'flat':pd.read_table('../dfs/flat-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'encl':pd.read_table('../dfs/encl-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS),
               'enca':pd.read_table('../dfs/enca-XREF_centos_combined_segtype_func_o3.lmDF7.77.csv',sep=',',usecols=COLUMNS)
             }
"""

def numStatLabel(dfs):
    for name,df in dfs.items():
        df['ObfStat'] = df['ObfStat'].map({'norm': 1, 'obfs': -1})
