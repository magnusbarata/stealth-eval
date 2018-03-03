#!/usr/bin/env python
# -*- coding: utf-8 -*-
import DFdef
import pandas as pd
import numpy as np
from pandas.plotting import scatter_matrix
import matplotlib.pyplot as plt
from sklearn import model_selection
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import classification_report
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.linear_model import LogisticRegression
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.neighbors import KNeighborsClassifier
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
from sklearn.naive_bayes import GaussianNB
from sklearn.svm import SVC
from sklearn.neural_network import MLPClassifier

## Algorithms to compare
algs = []
#algs.append(('LR', LogisticRegression()))
#algs.append(('LDA', LinearDiscriminantAnalysis()))
#algs.append(('KNN', KNeighborsClassifier(n_neighbors=20)))
#algs.append(('CART', DecisionTreeClassifier(criterion="entropy")))
algs.append(('CARF', RandomForestClassifier(n_estimators=10,max_features="sqrt",criterion="entropy")))
#algs.append(('NB', GaussianNB()))
#algs.append(('SVM', SVC()))
#algs.append(('MLP', MLPClassifier(solver='adam',alpha=1e-9,hidden_layer_sizes=(200,100,50,25))))

## Cross-fold validation parameters
validation_size = 0.20
scoring = 'accuracy'
seed = 7
kfold = model_selection.KFold(n_splits=10, random_state=seed)

## Test dataset
test = pd.read_table('../dfs/testDF7.42.csv',sep=',').drop(['ObfStat','Class'],axis=1)
Xts = test.iloc[:,2:7]

scaler = StandardScaler()
combDF = {'opc':pd.DataFrame([]), 'opr':pd.DataFrame([]), 'xrf':pd.DataFrame([])}
for mgran in DFdef.DFS:
    print('++++++++++++++++++',mgran,'++++++++++++++++++')
    for mthd in DFdef.DFS[mgran]: combDF[mgran] = combDF[mgran].append(DFdef.DFS[mgran][mthd])  # Combining data
    #scatter_matrix(combDF[mgran])     # Multivariate plots
    #print(combDF[mgran].iloc[:,0:5].corr())       # Correlation
    #print(combDF[mgran].groupby('Class').size()) # Showing number of members in each class

    ## Splitting training and validation
    arr = combDF[mgran].values
    X,Y = arr[:,0:5], arr[:,5] # arr[:,6] for ObfStat
    Xtr,Xval,Ytr,Yval = model_selection.train_test_split(X,Y,test_size=validation_size,random_state=seed)

    ## Scaling (Useful to speedup MLP and SVM)
    #scaler.fit(Xtr)
    #Xtr = scaler.transform(Xtr)
    #Xval = scaler.transform(Xval)

    ## Build Models
    algNames, results = [], []
    for algName, alg in algs:
        cv_results = model_selection.cross_val_score(alg, Xtr, Ytr, cv=kfold, scoring=scoring)
        results.append(cv_results)
        algNames.append(algName)
        msg = "%s: %f (%f)" % (algName, cv_results.mean(), cv_results.std())
        print(msg)

    ## Make predictions on validation dataset
    rfc = RandomForestClassifier()
    rfc.fit(Xtr, Ytr)
    predictions = rfc.predict(Xval)
    print(accuracy_score(Yval, predictions))
    print(confusion_matrix(Yval, predictions))
    print(classification_report(Yval, predictions))

    ## Make predictions on test dataset
    predictions = rfc.predict(Xts)
    test['pred'] = predictions
    test.to_csv('Class.csv')

    ## Feature importances
    importances = rfc.feature_importances_
    indices = np.argsort(importances)[::-1]
    for f in range(Xtr.shape[1]):
        print('%2d) %-*s %f' % (f+1,30,DFdef.COLUMNS[indices[f]], importances[indices[f]]))
