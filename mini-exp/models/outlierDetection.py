#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import DFdef
import pandas as pd
from sklearn.svm import OneClassSVM

## Algorithms to compare
algs = { 'OCSVM': OneClassSVM(kernel="rbf",nu=0.06, gamma=0.03)}

combDF = {'opc':pd.DataFrame([]), 'opr':pd.DataFrame([]), 'xrf':pd.DataFrame([])}
for mgran,dfs in DFdef.DFS.items():
    print('++++++++++++++++++',mgran,'++++++++++++++++++')
    DFdef.numStatLabel(dfs)      # Data labelling with ObfStat
    for mthd in dfs: combDF[mgran] = combDF[mgran].append(dfs[mthd])  # Combining data

    ## Build Models
    for i,(algName,alg) in enumerate(algs.items()):
        print('###',algName,'###')
        if algName == 'OCSVM': Xtr = combDF[mgran].values[:len(dfs['norm'])+len(dfs['orig']),0:5]
        else: Xtr = combDF[mgran].values[:,0:5]

        alg.fit(Xtr)
        accTotal = 0
        for j,(dfName,df) in enumerate(dfs.items()):
            print('\t###',dfName,' Accuracy ###')
            Xts = df.values[:,0:5]
            Yts = alg.predict(Xts)
            Ytr = df.values[:,6]
            Acc = Ytr[Ytr == Yts].size; accTotal += Acc
            print('\t',Acc,Acc/Ytr.size*100,'%')
        print('Total Accuracy:',accTotal,accTotal/combDF[mgran].shape[0]*100,'%')
