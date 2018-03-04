#include <stdio.h>
#include <stdlib.h>
void function_1(unsigned char input[4] , unsigned char output[4] ) ;
int main(int argc , char *argv[] ) 
{ 
  unsigned char input[4] ;
  unsigned char output[4] ;
  int randomFuns_i5 ;
  unsigned char randomFuns_value6 ;
  int randomFuns_main_i7 ;

  {
  if (argc != 5) {
    printf("Call this program with %i arguments\n", 4);
    exit(-1);
  } else {

  }
  randomFuns_i5 = 0;
  while (randomFuns_i5 < 4) {
    randomFuns_value6 = (unsigned char )strtoul(argv[randomFuns_i5 + 1], 0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 ++;
  }
  function_1(input, output);
  if (output[1] == (unsigned char)0) {
    printf("You win!\n");
  } else {

  }
  randomFuns_main_i7 = 0;
  while (randomFuns_main_i7 < 4) {
    printf("%u\n", output[randomFuns_main_i7]);
    randomFuns_main_i7 ++;
  }
}
}
void function_1(unsigned char input[4] , unsigned char output[4] ) 
{ 
  unsigned char state[8] ;
  long time___0 ;
  char password[100]  = "";
  int failed  = 0;
  int stringCompareResult ;
  int activationCode ;
  struct timeval __cil_tmp20 ;
  int __cil_tmp21 ;
  struct timeval time22 ;

  {
  state[0UL] = input[2UL] << (unsigned char)7;
  state[1UL] = (input[1UL] ^ input[3UL]) & (input[0UL] << (unsigned char)7);
  state[2UL] = input[3UL] << (((779203142UL | input[2UL]) & (unsigned char)7) | 1UL);
  state[3UL] = (input[1UL] & state[1UL]) ^ (41935672UL << (((state[2UL] >> (unsigned char)3) & (unsigned char)7) | 1UL));
  state[4UL] = (input[0UL] << (((state[1UL] >> (unsigned char)1) & (unsigned char)7) | 1UL)) << ((((state[2UL] << (unsigned char)3) >> (unsigned char)4) & (unsigned char)7) | 1UL);
  state[5UL] = (input[1UL] | state[1UL]) | (input[0UL] << (unsigned char)1);
  state[6UL] = input[3UL] & 713359464UL;
  state[7UL] = input[2UL] << (((state[1UL] >> (unsigned char)2) & (unsigned char)7) | 1UL);
  __cil_tmp21 = gettimeofday(& __cil_tmp20, 0);
  time22 = __cil_tmp20;
  time___0 = time22.tv_sec;
  printf("Please enter password:");
  scanf("%s", password);
  activationCode = input[0UL];
  stringCompareResult = strncmp(password, "secret", 100UL);
  failed |= stringCompareResult != 0UL;
  failed |= time___0 < 1398629497UL;
  failed |= activationCode != 42UL;
  if (failed) {
    abort();
  }
  if ((state[0UL] ^ state[1UL]) << ((((state[2UL] | state[3UL]) >> (unsigned char)4) & (unsigned char)7) | 1UL) != ((state[4UL] << (((state[5UL] >> (unsigned char)3) & (unsigned char)7) | 1UL)) | (state[6UL] ^ state[7UL]))) {
    if (((state[0UL] ^ state[1UL]) & (state[2UL] ^ state[3UL])) > ((state[4UL] ^ state[5UL]) ^ (state[6UL] << (((state[7UL] >> (unsigned char)2) & (unsigned char)7) | 1UL)))) {
      state[2UL] = state[4UL] & state[7UL];
    } else {
      state[3UL] = state[5UL] | state[1UL];
    }
  } else {
    state[7UL] = state[2UL] | state[5UL];
  }
  output[0UL] = state[6UL] >> (unsigned char)5;
  output[1UL] = (state[2UL] >> (((state[0UL] >> (unsigned char)3) & (unsigned char)7) | 1UL)) >> (((360314520UL << (((state[4UL] >> (unsigned char)1) & (unsigned char)7) | 1UL)) & (unsigned char)7) | 1UL);
  output[2UL] = state[5UL] | state[1UL];
  output[3UL] = state[3UL] | (state[7UL] >> (unsigned char)3);
}
}
