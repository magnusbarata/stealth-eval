#!/usr/bin/env python
# -*- coding: utf-8 -*-
import DFdef
import pandas as pd
import numpy as np
from pandas.plotting import scatter_matrix
import matplotlib.pyplot as plt
from sklearn import model_selection
from sklearn.metrics import classification_report
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.ensemble import RandomForestClassifier

## Algorithms to compare
algs = []
algs.append(('CARF', RandomForestClassifier(n_estimators=10,max_features="sqrt",criterion="entropy")))

## Cross-fold validation parameters
validation_size = 0.20
scoring = 'accuracy'
seed = 7
kfold = model_selection.KFold(n_splits=10, random_state=seed)

combDF = {'opc':pd.DataFrame([]), 'opr':pd.DataFrame([]), 'xrf':pd.DataFrame([])}
for mgran in DFdef.DFS:
    print('++++++++++++++++++',mgran,'++++++++++++++++++')
    for mthd in DFdef.DFS[mgran]: combDF[mgran] = combDF[mgran].append(DFdef.DFS[mgran][mthd])  # Combining data
    print(combDF[mgran].iloc[:,0:5].corr())       # Correlation
    print(combDF[mgran].groupby('Class').size()) # Showing number of members in each class

    ## Splitting training and validation
    arr = combDF[mgran].values
    X,Y = arr[:,0:5], arr[:,5] # arr[:,6] for ObfStat
    Xtr,Xval,Ytr,Yval = model_selection.train_test_split(X,Y,test_size=validation_size,random_state=seed)

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

    ## Feature importances
    importances = rfc.feature_importances_
    indices = np.argsort(importances)[::-1]
    for f in range(Xtr.shape[1]):
        print('%2d) %-*s %f' % (f+1,30,DFdef.COLUMNS[indices[f]], importances[indices[f]]))
