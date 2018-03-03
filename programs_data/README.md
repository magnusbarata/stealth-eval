# programs_data
contains program used as evaluation target (*e.g* data to create machine learning models, testing the trained models).

## centos
contains centos programs

## randfuns
contains programs generated using Tigress `RandomFuns` transformation.

## randfuns-jmp
contains obfuscated_jmp-obfuscated version of randfuns.

## randfuns-obfs
contains Tigress-obfuscated version of randfuns.

## test-prog
contains programs to create test datasets.

### subdirs
Inside the directories mentioned above, the following directory also exists:
  - `bin` contains the binary files
  - `dumpcsv` contains the csv files dumped by [IDA](https://www.hex-rays.com/products/ida/index.shtml) using code-analysis's `repeatdump.py`.
  - `dfs` contains dataframe created using `makeDF.py`.
  - `src` contains source code if available
  - `mgran_lm_name` contains probability list calculated using `calcProb.py`
