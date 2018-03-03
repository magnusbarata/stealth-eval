# Experiment Procedure
To simplify the whole process, this procedure will only explain OPCODE granularity and one obfuscation method. For automated build, run `build.sh` and it must run clean, without any error, before experimenting on real repository. **This is only a sample! Actual invocation might differs and it does not guaranteed 100% that real repository will work without error on your environment after successful `build.sh` run.**

## Step 1
Prepare Normal and Obfuscated programs.
1. Generate randfuns programs and obfuscate (ex. using enca).
  ```sh
  ./programs_data/randfuns/gen_orig.py
  ./mulObfs.py programs_data/randfuns/src/ programs_data/randfuns-obfs/ --ext
  ```

## Step 2
Extract programs features.
2. Calculate probability of `centos/System-Environment/`.
  ```sh
  ./calcProb.py programs_data/centos/System-Environment/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
  ```

3. Calculate probability of `randfuns/bin/` and `randfuns-obfs/bin/`.
  ```sh
  ./calcProb.py programs_data/randfuns/bin/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
  ./calcProb.py programs_data/randfuns-obfs/bin/ corpus/centos_combined_opcode_func_o3.lm -mgran OPCODE -ext
  ```

4. Create dataframe.
  ```sh
  ./makeDF.py programs_data/centos/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d centossys-OPCOD_centos_combined_opcode_func_o3.lmDF7.42
  ./makeDF.py programs_data/randfuns/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d randfuns-OPCOD_centos_combined_opcode_func_o3.lmDF7.42
  ./makeDF.py programs_data/randfuns-obfs/OPCOD_centos_combined_opcode_func_o3.lm/ 7.42 -d enca-OPCOD_centos_combined_opcode_func_o3.lmDF7.42 -f main,function_1 -c enca -s obfs
  ```

## Step 3
Build and evaluate ML model. Default is 8 class classification.
5. Build ML model.
  ```sh
  ./models/classification.py
  ./models/outlierDetection.py
  ```
