#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import DFdef
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.svm import OneClassSVM
from sklearn.covariance import EllipticEnvelope
from sklearn.ensemble import IsolationForest

## Algorithms to compare
algs = { 'OCSVM': OneClassSVM(kernel="rbf",nu=0.06, gamma=0.03),
         #'Robust covariance': EllipticEnvelope(),
         #'Isolation Forest': IsolationForest(n_estimators=200)
        }

## Plot preparations
markers = ['o','s','P','X','^','p','*','8','d','gx','ro']
sizes = [7,8,8,8,8,8,8,8,8,8,12]

## Test dataset
test = pd.read_table('../dfs/testDF7.42.csv',sep=',').drop(['ObfStat','Class'],axis=1)
Xtst = test.iloc[:,2:7]

def plot(df,pred,axarr,label,marker,size,showOutlier):
    assert len(axarr.reshape(-1)) is 4, 'Not enough axis is given.'
    for i,ax in enumerate(axarr.reshape(-1)):
        ax.plot(df[DFdef.COLUMNS[-3]],df[DFdef.COLUMNS[i]],marker,alpha=0.3,label=label,ms=size,)
        ax.set_xlabel(DFdef.COLUMNS[-3]); ax.set_ylabel(DFdef.COLUMNS[i])
        ax.grid(True)
        if showOutlier: ax.plot(df[DFdef.COLUMNS[-3]][pred == -1], df[DFdef.COLUMNS[i]][pred == -1],
             markers[-1],label='outlier',ms=sizes[-1],fillstyle='none',alpha=0.2)
    return axarr

scaler = StandardScaler()
combDF = {'opc':pd.DataFrame([]), 'opr':pd.DataFrame([]), 'xrf':pd.DataFrame([])}
for mgran,dfs in DFdef.DFS.items():
    graphs = []
    graphs.append(plt.subplots(2,2,figsize=(10,10)))
    #graphs.append(plt.subplots(2,2,figsize=(10,10)))
    #graphs.append(plt.subplots(2,2,figsize=(10,10)))
    print('++++++++++++++++++',mgran,'++++++++++++++++++')
    DFdef.numStatLabel(dfs)      # Data labelling with ObfStat
    for mthd in dfs: combDF[mgran] = combDF[mgran].append(dfs[mthd])  # Combining data

    ## Build Models
    for i,(algName,alg) in enumerate(algs.items()):
        print('###',algName,'###')
        if algName == 'OCSVM': Xtr = combDF[mgran].values[:len(dfs['split'])+len(dfs['centos'])+len(dfs['orig']),0:5]
        else: Xtr = combDF[mgran].values[:,0:5]

        ## Scaling
        #scaler.fit(Xtr)
        #Xtr = scaler.transform(Xtr)

        alg.fit(Xtr)
        accTotal = 0
        for j,(dfName,df) in enumerate(dfs.items()):
            print('\t###',dfName,' Accuracy ###')
            Xts = df.values[:,0:5]
            #Xts = scaler.transform(df.values[:,0:5])
            Yts = alg.predict(Xts)
            Ytr = df.values[:,6]
            Acc = Ytr[Ytr == Yts].size; accTotal += Acc
            print('\t',Acc,Acc/Ytr.size*100,'%')
            plot(df,Yts,graphs[i][1],dfName,markers[j],sizes[j],True)
        print('Total Accuracy:',accTotal,accTotal/combDF[mgran].shape[0]*100,'%')
        graphs[i][0].legend(loc=(0.25,0.93),ncol=6, borderaxespad=0.)
        graphs[i][0].savefig(mgran+'_'+algName,dpi=200)
        
        ## Make predictions on test dataset
        predictions = alg.predict(Xtst)
        test['pred'] = predictions
        test.to_csv('Outlier.csv')
