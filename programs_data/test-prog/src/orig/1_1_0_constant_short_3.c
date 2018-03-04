#include <stdio.h>
#include <stdlib.h>
void function_1(unsigned short input[4] , unsigned short output[4] ) ;
void function_1(unsigned short input[4] , unsigned short output[4] ) 
{ 
  unsigned short state[8] ;
  long time___0 ;
  char password[100]  = "";
  int failed  = 0;
  int stringCompareResult ;
  int activationCode ;
  struct timeval __cil_tmp20 ;
  int __cil_tmp21 ;
  struct timeval time22 ;

  {
  state[0UL] = (input[2UL] ^ 479296178UL) + ((input[1UL] << (unsigned short)9) | (input[1UL] >> (unsigned short)7));
  state[1UL] = (input[3UL] >> (((797481593UL | state[0UL]) & (unsigned short)15) | 1UL)) | (input[3UL] << (16 - (((797481593UL | state[0UL]) & (unsigned short)15) | 1UL)));
  state[2UL] = (input[0UL] << (unsigned short)9) | (input[0UL] >> (unsigned short)7);
  state[3UL] = ((input[3UL] + state[0UL]) << (((state[1UL] + (state[2UL] >> (unsigned short)5)) & (unsigned short)15) | 1UL)) | ((input[3UL] + state[0UL]) >> (16 - (((state[1UL] + (state[2UL] >> (unsigned short)5)) & (unsigned short)15) | 1UL)));
  state[4UL] = (input[1UL] << (unsigned short)1) + ((input[2UL] << (((input[0UL] >> (unsigned short)2) & (unsigned short)15) | 1UL)) | (input[2UL] >> (16 - (((input[0UL] >> (unsigned short)2) & (unsigned short)15) | 1UL))));
  state[5UL] = input[1UL] | ((960999700UL << (((input[0UL] >> (unsigned short)1) & (unsigned short)15) | 1UL)) | (960999700UL >> (16 - (((input[0UL] >> (unsigned short)1) & (unsigned short)15) | 1UL))));
  state[6UL] = ((input[3UL] << ((input[2UL] & (unsigned short)15) | 1UL)) | (input[3UL] >> (16 - ((input[2UL] & (unsigned short)15) | 1UL)))) ^ ((state[4UL] << ((state[2UL] * state[5UL] & (unsigned short)15) | 1UL)) | (state[4UL] >> (16 - ((state[2UL] * state[5UL] & (unsigned short)15) | 1UL))));
  state[7UL] = ((input[3UL] << ((state[5UL] & (unsigned short)15) | 1UL)) | (input[3UL] >> (16 - ((state[5UL] & (unsigned short)15) | 1UL)))) | (state[3UL] + state[0UL]);
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
  if (! (((state[0UL] & state[1UL]) ^ (state[2UL] & state[3UL])) == (state[4UL] * state[5UL]) * (state[6UL] << ((state[7UL] & (unsigned short)7) | 1UL)))) {
    state[6UL] = state[1UL] + state[7UL];
  }
  output[0UL] = state[7UL] >> (((state[3UL] ^ 1070435147UL) & (unsigned short)7) | 1UL);
  output[1UL] = state[0UL] * 413250805UL << (((762889424UL - state[1UL]) & (unsigned short)7) | 1UL);
  output[2UL] = (state[2UL] << (((state[5UL] + state[6UL]) & (unsigned short)15) | 1UL)) | (state[2UL] >> (16 - (((state[5UL] + state[6UL]) & (unsigned short)15) | 1UL)));
  output[3UL] = state[4UL] * 225222497UL + (unsigned short)57211;
}
}
int main(int argc , char *argv[] ) 
{ 
  unsigned short input[4] ;
  unsigned short output[4] ;
  int randomFuns_i5 ;
  unsigned short randomFuns_value6 ;
  int randomFuns_main_i7 ;

  {
  if (argc != 5) {
    printf("Call this program with %i arguments\n", 4);
    exit(-1);
  } else {

  }
  randomFuns_i5 = 0;
  while (randomFuns_i5 < 4) {
    randomFuns_value6 = (unsigned short )strtoul(argv[randomFuns_i5 + 1], 0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 ++;
  }
  function_1(input, output);
  if (output[1] == (unsigned short)12016) {
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
