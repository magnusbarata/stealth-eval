# -*- coding: utf-8 -*-
import os

TIGRESS_HOME = os.environ['TIGRESS_HOME']
JITTER = TIGRESS_HOME+'/jitter-amd64.c'

METHODS = {'enca'  : ['tigress','--Transform=EncodeArithmetic','--Functions=*']}
