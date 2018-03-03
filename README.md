# Stealth-Evaluation via machine learning
  Code obfuscation techniques are widely used for protecting software against MATE (man-at-the-end) attacks. The objective of code obfuscation is to make a program more difficult to understand for adversarial humans, while preserving program semantics for its desired users.

  To evaluate the quality of an obfuscated program, we could measure the *resilience* and *stealthiness* of the given program. Here,
  - **resilience**: effort required for an attacker to understand the obfuscated code
  - **stealth**: the degree to which obfuscated code can be distinguished from unobfuscated code


  Therefore, this *stealth-evaluation* project aims to analyze how can an obfuscated code distinguished from unobfuscated code using machine learning methods.

## Prerequisites
The following must be available upon using this repository:
* [Tigress C Obfuscator](http://tigress.cs.arizona.edu/) v2.2 or higher
* [code-analysis](https://github.com/silab-nitkc/code-analysis) and it's dependencies
* [Obfuscate-jmp](https://github.com/silab-nitkc/Obfuscate-jmp) and it's dependencies
* Python3 with at least pandas v0.22, matplotlib v2.1.2, sklearn v0.19.1 installed

## Preparations
1. Make sure tigress (`tigress`,`$TIGRESS_HOME`) is available as environment variable.
2. Put code-analysis on stealth-evaluation root directory.
3. Put `makeCodeWritable.h` and `obfuscate_jmp.py` from Obfuscate-jmp on `programs_data/randfuns-jmp/`.
4. To check your environment, use `build.sh` on `mini-exp` directory.

## Description of scripts
  All scripts have the `-h` to show help on it.
  - `makeDF.py` script to create dataframe for machine learning models.
  Available features are: *`Artificiality`, `MaxSurprisal`, `UniqueIns`,`Length`,`OverThreshold`*. Usage example :
    ```sh
    makeDF.py target_dir threshold  # default, simple invocation
    makeDF.py target_dir threshold -f main,f1 -c jit -s obfs # Labelling main and f1 function Class as jit and ObfStat as obfs
    makeDF.py target_dir threshold -d dfOutName -g Len,Art Len,Unq # Output dataframe file will be named dfOutName, and two graphs will be created
    ```
  - `calcProb.py` script to calculate probability using code-analysis's `code2problist.py`. Usage example :
    ```sh
    calcProb.py target_dir corpus.lm # All default settings
    calcProb.py target_dir corpus.lm -mgran OPCODE -ext bin # Granularity is set to OPCODE and files with bin extensions will be targeted
    ```
  - `mulObfs.py` script to obfuscate all files inside a directory using tigress. Tigress invocation is defined on `obfsdef.py`. Usage example :
    ```sh
    mulObfs.py target_dir dest_dir  # default, simple invocation
    mulObfs.py target_dir dest_dir --ext bin # saving the obfuscated binary file with bin extension
    ```
  - `cmpDF.py` script to compare two dataframe files. Usage example :
    ```sh
    cmpDF.py dfFILE1 dfFILE2
    ```

## Description of Each Directory
  - `cmp` contains quick comparison of dataframe graphs generated by `cmpDF.py`.
  - `corpus` contains lm data to be used when invoking `calcProb.py`.
  - `dfs` contains dataframe for machine learning.
  - `mini-exp` contains files to test your environment.
  - `models` contains python scripts to create machine learning models.
  - `programs_data` contains programs used as evaluation target. Due to file size, some files are uploaded to NAS(10.133.76.21).
  - `papers` contains thesis, summary, and presentation.

## Authors
  - [**hi13barata**]() -*Initial work*-

## References
1. Kanzaki, Y., Thomborson, C., Monden, A., & Collberg, C. (2015, December). _Pinpointing and Hiding Surprising Fragments in an Obfuscated Program_. In Joint PPREW / SSP Workshop
2. Kanzaki, Y., Monden, A., & Collberg, C. (2015). _Code Artificiality: A Metric for the Code Stealth Based on an N-gram Model_. In 1st International Workshop on Software Protection.
3. Banescu, S., Collberg, C., & Pretschner, A. (2017, August). _Predicting the Resilience of Obfuscated Code Against Symbolic Execution Attacks via Machine Learning_. In Proceedings of the 26th USENIX Security Symposium.
4. 村上隼之助，神崎雄一郎，門田暁人．(2018). _分岐命令 のカムフラージュに基づくプログラムの制御フ ローの隠ぺい_. 火の国情報シンポジウム 2018， 情報処理学会九州支部