#include<stdio.h>
#include<stdlib.h>

void SECRET_1(unsigned int input[4] , unsigned int output[4] ) ;
int main(int argc , char *argv[] )
{
  unsigned int input[4] ;
  unsigned int output[4] ;
  int randomFuns_i5 ;
  unsigned int randomFuns_value6 ;
  int randomFuns_main_i7 ;

  {
  if (argc != 5) {
    printf("Call this program with %i arguments\n", 4);
    exit(-1);
  } else {

  }
  randomFuns_i5 = 0;
  while (randomFuns_i5 < 4) {
    randomFuns_value6 = (unsigned int )strtoul(argv[randomFuns_i5 + 1], 0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 ++;
  }
  SECRET_1(input, output);
  randomFuns_main_i7 = 0;
  while (randomFuns_main_i7 < 4) {
    printf("%u\n", output[randomFuns_main_i7]);
    randomFuns_main_i7 ++;
  }
}
}
void SECRET_1(unsigned int input[4] , unsigned int output[4] )
{
  unsigned int state[8] ;
  unsigned short randomFunsSwapPartCopy20 ;

  {
  state[0UL] = ((input[3UL] >> 1U) | (input[3UL] << 31U)) - (29756720UL | input[2UL]);
  state[1UL] = (input[0UL] & state[0UL]) >> 7U;
  state[2UL] = ((input[1UL] >> (((state[0UL] >> 2U) & 15U) | 1UL)) | (input[1UL] << (32 - (((state[0UL] >> 2U) & 15U) | 1UL)))) ^ (state[1UL] + 772021819UL);
  state[3UL] = input[2UL] + state[1UL];
  state[4UL] = ((input[3UL] & 908134987UL) >> (((133295144UL + state[1UL]) & 15U) | 1UL)) | ((input[3UL] & 908134987UL) << (32 - (((133295144UL + state[1UL]) & 15U) | 1UL)));
  state[5UL] = ((input[1UL] ^ input[0UL]) >> ((((state[1UL] + state[4UL]) >> 3U) & 15U) | 1UL)) | ((input[1UL] ^ input[0UL]) << (32 - ((((state[1UL] + state[4UL]) >> 3U) & 15U) | 1UL)));
  state[6UL] = input[2UL] | (input[0UL] + input[3UL]);
  state[7UL] = (input[1UL] + 616990732UL) | (state[1UL] + state[2UL]);
  randomFunsSwapPartCopy20 = *((unsigned short *)(& state[6UL]) + 1);
  *((unsigned short *)(& state[6UL]) + 1) = *((unsigned short *)(& state[6UL]) + 0);
  *((unsigned short *)(& state[6UL]) + 0) = randomFunsSwapPartCopy20;
  randomFunsSwapPartCopy20 = *((unsigned short *)(& state[6UL]) + 0);
  *((unsigned short *)(& state[6UL]) + 0) = *((unsigned short *)(& state[6UL]) + 1);
  *((unsigned short *)(& state[6UL]) + 1) = randomFunsSwapPartCopy20;
  state[2UL] = state[7UL] << (((state[6UL] >> 1U) & 7U) | 1UL);
  state[3UL] |= ((state[3UL] & state[1UL]) & 31U) << 3UL;
  output[0UL] = (state[6UL] * 454185342UL << (((717108980UL + state[7UL]) & 15U) | 1UL)) | (state[6UL] * 454185342UL >> (32 - (((717108980UL + state[7UL]) & 15U) | 1UL)));
  output[1UL] = (state[2UL] & 786560478UL) + (state[1UL] ^ 3221969090U);
  output[2UL] = (state[3UL] ^ state[0UL]) + 912798447U;
  output[3UL] = (((state[5UL] << (((state[4UL] >> 4U) & 15U) | 1UL)) | (state[5UL] >> (32 - (((state[4UL] >> 4U) & 15U) | 1UL)))) << 9U) | (((state[5UL] << (((state[4UL] >> 4U) & 15U) | 1UL)) | (state[5UL] >> (32 - (((state[4UL] >> 4U) & 15U) | 1UL)))) >> 23U);
}
}
