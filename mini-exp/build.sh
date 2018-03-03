#!/bin/bash
echo STEP 1
./programs_data/randfuns/gen_orig.py
./mulObfs.py programs_data/randfuns/src/ programs_data/randfuns-obfs/ --ext
echo STEP 2
./calcProb.py programs_data/centos/System-Environment/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
./calcProb.py programs_data/randfuns/bin/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
./calcProb.py programs_data/randfuns-obfs/bin/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
./makeDF.py programs_data/centos/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d centossys-OPCOD_centos_combined_opcode_func_o3.lmDF7.42
./makeDF.py programs_data/randfuns/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d randfuns-OPCOD_centos_combined_opcode_func_o3.lmDF7.42
./makeDF.py programs_data/randfuns-obfs/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d enca-OPCOD_centos_combined_opcode_func_o3.lmDF7.42 -f main,function_1 -c enca -s obfs
echo STEP 3
./models/classification.py
./models/outlierDetection.py
