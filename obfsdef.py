# -*- coding: utf-8 -*-
import os

TIGRESS_HOME = os.environ['TIGRESS_HOME']
JITTER = TIGRESS_HOME+'/jitter-amd64.c'

METHODS = {'jit'   : ['tigress','--Transform=Jit','--Functions=function_1','-include',JITTER],         ## failed to check
           'vir'   : ['tigress','--Transform=Virtualize','--Functions=*'],                            ## randfuns-obfs OK!
           'dyn'   : ['tigress','--Transform=JitDynamic','--Functions=function_1','-include',JITTER],  ## failed to check
           'aaa'   : ['tigress','--Transform=InitOpaque','--Functions=main',                          ## randfuns-obfs OK!
                      '--Transform=AntiAliasAnalysis','--Functions=*'],
           'enca'  : ['tigress','--Transform=EncodeArithmetic','--Functions=*'],                      ## randfuns-obfs OK!
           'encl'  : ['tigress','--Transform=EncodeLiterals','--Functions=*'],                        ## randfuns-obfs OK!
           'flat'  : ['tigress','--Transform=Flatten','--Functions=*'],                               ## randfuns-obfs OK!
           'split' : ['tigress','--Transform=Split','--Functions=function_1','--SplitCount=10'],      ## randfuns-obfs OK!
           'addop' : ['tigress','--Transform=InitOpaque','--Functions=main',                          ## randfuns-obfs OK! 
                      '--Transform=UpdateOpaque','--Functions=function_1','--UpdateOpaqueCount=10',
                      '--Transform=AddOpaque','--Functions=function_1','--AddOpaqueCount=10']
            #TOADD: Multiple transformation
          }
