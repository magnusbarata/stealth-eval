#include <stdio.h>
#include <stdlib.h>
void function_1(unsigned long input[4] , unsigned long output[4] ) ;
void function_1(unsigned long input[4] , unsigned long output[4] ) 
{ 
  unsigned long state[8] ;
  long time___0 ;
  char password[100]  = "";
  int failed  = 0;
  int stringCompareResult ;
  int activationCode ;
  struct timeval __cil_tmp20 ;
  int __cil_tmp21 ;
  struct timeval time22 ;
  char randomFunsSwapPartCopy23 ;

  {
  state[0UL] = (input[2UL] + 369812431UL) + 1343232709UL;
  state[1UL] = input[0UL] + (state[0UL] + input[3UL]);
  state[2UL] = (input[1UL] + state[1UL]) + 1591870014UL;
  state[3UL] = input[2UL] + (298095812UL + input[0UL]);
  state[4UL] = input[3UL] + 1048563117UL;
  state[5UL] = input[1UL] + 439677065UL;
  state[6UL] = input[2UL] - 1016381247UL;
  state[7UL] = (input[0UL] + input[3UL]) + (input[1UL] + (868485486UL + state[6UL]));
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
  if ((state[0UL] + state[1UL]) + (state[2UL] - state[3UL]) == (state[4UL] + state[5UL]) + (state[6UL] - state[7UL])) {
    if ((state[0UL] + state[1UL]) + (state[2UL] - state[3UL]) != (state[4UL] + state[5UL]) - (state[6UL] + state[7UL])) {
      if ((state[0UL] - state[1UL]) + (state[2UL] + state[3UL]) != (state[4UL] - state[5UL]) + (state[6UL] + state[7UL])) {
        state[5UL] = state[1UL] - state[6UL];
      } else {
        state[3UL] = state[0UL] + state[0UL];
      }
    } else {
      randomFunsSwapPartCopy23 = *((char *)(& state[0UL]) + 2);
      *((char *)(& state[0UL]) + 2) = *((char *)(& state[0UL]) + 5);
      *((char *)(& state[0UL]) + 5) = randomFunsSwapPartCopy23;
      randomFunsSwapPartCopy23 = *((char *)(& state[0UL]) + 1);
      *((char *)(& state[0UL]) + 1) = *((char *)(& state[0UL]) + 3);
      *((char *)(& state[0UL]) + 3) = randomFunsSwapPartCopy23;
    }
  }
  output[0UL] = state[6UL] - state[7UL];
  output[1UL] = state[5UL] - (908850774UL - state[3UL]);
  output[2UL] = state[2UL] + (660129543UL - state[1UL]);
  output[3UL] = (state[0UL] + state[4UL]) - 1523323738UL;
}
}
int main(int argc , char *argv[] ) 
{ 
  unsigned long input[4] ;
  unsigned long output[4] ;
  int randomFuns_i5 ;
  unsigned long randomFuns_value6 ;
  int randomFuns_main_i7 ;

  {
  if (argc != 5) {
    printf("Call this program with %i arguments\n", 4);
    exit(-1);
  } else {

  }
  randomFuns_i5 = 0;
  while (randomFuns_i5 < 4) {
    randomFuns_value6 = strtoul(argv[randomFuns_i5 + 1], 0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 ++;
  }
  function_1(input, output);
  if (output[1] == 18446744073538473845UL) {
    printf("You win!\n");
  } else {

  }
  randomFuns_main_i7 = 0;
  while (randomFuns_main_i7 < 4) {
    printf("%lu\n", output[randomFuns_main_i7]);
    randomFuns_main_i7 ++;
  }
}
}
