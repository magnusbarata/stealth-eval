/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern double ceil(double x ) ;
extern int ( /* missing proto */  gettimeofday)() ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int getpagesize() ;
typedef long __suseconds_t;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned long strlen(char const   *s ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int ( /* missing proto */  strncmp)() ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern long write(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern int raise(int sig ) ;
char **_global_envp  =    (char **)0;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef long __time_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern long clock(void) ;
extern int unlink(char const   *filename ) ;
extern long time(long *tloc ) ;
extern int rand() ;
void function_1(unsigned char *input , unsigned char *output ) ;
extern long read(int filedes , void *buf , unsigned long nbyte ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern double sqrt(double x ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern void *malloc(unsigned long size ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                    int __base ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern void free(void *ptr ) ;
extern int atoi(char const   *s ) ;
extern void signal(int sig , void *func ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
void megaInit(void) ;
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  unsigned char input[4] ;
  unsigned char output[4] ;
  int randomFuns_i5 ;
  unsigned char randomFuns_value6 ;
  int randomFuns_main_i7 ;
  unsigned long tmp ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (((unsigned int )((((argc - 5) >> 31) - (argc - 5)) ^ ((argc - 5) >> 31)) >> 31U) & 1) {
    printf((char const   */* __restrict  */)"Call this program with %i arguments\n",
           4);
    exit(-1);
  }
  randomFuns_i5 = 0;
  while (((unsigned int )((randomFuns_i5 - 4) ^ ((randomFuns_i5 ^ 4) & ((randomFuns_i5 - 4) ^ randomFuns_i5))) >> 31U) & 1) {
    tmp = strtoul((char const   */* __restrict  */)*(argv + (((randomFuns_i5 | 1) + (randomFuns_i5 | 1)) - (randomFuns_i5 ^ 1))),
                  (char **/* __restrict  */)0, 10);
    randomFuns_value6 = (unsigned char )tmp;
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 = (randomFuns_i5 - ~ 1) - 1;
  }
  function_1((unsigned char *)(input), (unsigned char *)(output));
  if (((unsigned int )(((((int )output[1] - 83) ^ (((int )output[1] - 83) >> 31)) - (((int )output[1] - 83) >> 31)) - 1) >> 31U) & 1) {
    printf((char const   */* __restrict  */)"You win!\n");
  }
  randomFuns_main_i7 = 0;
  while (((unsigned int )(((((4 - randomFuns_main_i7) & - (4 >= randomFuns_main_i7)) + ((4 - randomFuns_main_i7) & - (4 >= randomFuns_main_i7))) & (((4 - randomFuns_main_i7) & - (4 >= randomFuns_main_i7)) >> 31)) - ((4 - randomFuns_main_i7) & - (4 >= randomFuns_main_i7))) >> 31U) & 1) {
    printf((char const   */* __restrict  */)"%u\n", (int )output[randomFuns_main_i7]);
    randomFuns_main_i7 = ((randomFuns_main_i7 ^ ~ 1) + ((randomFuns_main_i7 | 1) + (randomFuns_main_i7 | 1))) + 1;
  }
  return (0);
}
}
void function_1(unsigned char *input , unsigned char *output ) 
{ 
  unsigned char state[8] ;
  long time___0 ;
  char password[100] ;
  unsigned int tmp ;
  int failed ;
  int stringCompareResult ;
  int activationCode ;
  struct timeval __cil_tmp20 ;
  int __cil_tmp21 ;
  struct timeval time22 ;

  {
  password[0] = (char )'\000';
  tmp = 1U;
  while (! ((int )((((~ 100U | tmp) & ((100U ^ tmp) | ~ (tmp - 100U))) >> 31U) & 1U))) {
    password[tmp] = (char)0;
    tmp = (tmp - ~ 1U) - 1U;
  }
  failed = 0;
  state[0UL] = (unsigned char )((((((unsigned long )*(input + 2UL) & 369812431UL) * ((unsigned long )*(input + 2UL) | 369812431UL) + ((unsigned long )*(input + 2UL) & ~ 369812431UL) * (~ ((unsigned long )*(input + 2UL)) & 369812431UL)) ^ ~ 197UL) + (((((unsigned long )*(input + 2UL) & 369812431UL) * ((unsigned long )*(input + 2UL) | 369812431UL) + ((unsigned long )*(input + 2UL) & ~ 369812431UL) * (~ ((unsigned long )*(input + 2UL)) & 369812431UL)) | 197UL) << 1UL)) + 1UL);
  state[1UL] = (unsigned char )(((int )*(input + 0UL) & (((int )state[0UL] & (int )*(input + 3UL)) * ((int )state[0UL] | (int )*(input + 3UL)) + ((int )state[0UL] & ~ ((int )*(input + 3UL))) * (~ ((int )state[0UL]) & (int )*(input + 3UL)))) * ((int )*(input + 0UL) | (((int )state[0UL] & (int )*(input + 3UL)) * ((int )state[0UL] | (int )*(input + 3UL)) + ((int )state[0UL] & ~ ((int )*(input + 3UL))) * (~ ((int )state[0UL]) & (int )*(input + 3UL)))) + ((int )*(input + 0UL) & ~ (((int )state[0UL] & (int )*(input + 3UL)) * ((int )state[0UL] | (int )*(input + 3UL)) + ((int )state[0UL] & ~ ((int )*(input + 3UL))) * (~ ((int )state[0UL]) & (int )*(input + 3UL)))) * (~ ((int )*(input + 0UL)) & (((int )state[0UL] & (int )*(input + 3UL)) * ((int )state[0UL] | (int )*(input + 3UL)) + ((int )state[0UL] & ~ ((int )*(input + 3UL))) * (~ ((int )state[0UL]) & (int )*(input + 3UL)))));
  state[2UL] = (unsigned char )((((((int )*(input + 1UL) | (int )state[1UL]) << 1) - ((int )*(input + 1UL) ^ (int )state[1UL])) ^ 62) + ((((((int )*(input + 1UL) | (int )state[1UL]) << 1) - ((int )*(input + 1UL) ^ (int )state[1UL])) & 62) << 1));
  state[3UL] = (unsigned char )((((unsigned long )*(input + 2UL) ^ ~ (((298095812UL | (unsigned long )*(input + 0UL)) + (298095812UL | (unsigned long )*(input + 0UL))) - (298095812UL ^ (unsigned long )*(input + 0UL)))) + (((unsigned long )*(input + 2UL) | (((298095812UL | (unsigned long )*(input + 0UL)) + (298095812UL | (unsigned long )*(input + 0UL))) - (298095812UL ^ (unsigned long )*(input + 0UL)))) << 1UL)) + 1UL);
  state[4UL] = (unsigned char )(((unsigned long )*(input + 3UL) & 1048563117UL) * ((unsigned long )*(input + 3UL) | 1048563117UL) + ((unsigned long )*(input + 3UL) & ~ 1048563117UL) * (~ ((unsigned long )*(input + 3UL)) & 1048563117UL));
  state[5UL] = (unsigned char )(((unsigned long )*(input + 1UL) & ~ 439677065UL) - (~ ((unsigned long )*(input + 1UL)) & 439677065UL));
  state[6UL] = (unsigned char )(((int )*(input + 2UL) ^ 6) + (((int )*(input + 2UL) & 6) << 1));
  state[7UL] = (unsigned char )(((unsigned long )(((int )*(input + 0UL) & (int )*(input + 3UL)) * ((int )*(input + 0UL) | (int )*(input + 3UL)) + ((int )*(input + 0UL) & ~ ((int )*(input + 3UL))) * (~ ((int )*(input + 0UL)) & (int )*(input + 3UL))) & ((((unsigned long )*(input + 1UL) ^ ~ ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) + (((unsigned long )*(input + 1UL) | ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) << 1UL)) + 1UL)) * ((unsigned long )(((int )*(input + 0UL) & (int )*(input + 3UL)) * ((int )*(input + 0UL) | (int )*(input + 3UL)) + ((int )*(input + 0UL) & ~ ((int )*(input + 3UL))) * (~ ((int )*(input + 0UL)) & (int )*(input + 3UL))) | ((((unsigned long )*(input + 1UL) ^ ~ ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) + (((unsigned long )*(input + 1UL) | ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) << 1UL)) + 1UL)) + ((unsigned long )(((int )*(input + 0UL) & (int )*(input + 3UL)) * ((int )*(input + 0UL) | (int )*(input + 3UL)) + ((int )*(input + 0UL) & ~ ((int )*(input + 3UL))) * (~ ((int )*(input + 0UL)) & (int )*(input + 3UL))) & ~ ((((unsigned long )*(input + 1UL) ^ ~ ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) + (((unsigned long )*(input + 1UL) | ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) << 1UL)) + 1UL)) * (~ ((unsigned long )(((int )*(input + 0UL) & (int )*(input + 3UL)) * ((int )*(input + 0UL) | (int )*(input + 3UL)) + ((int )*(input + 0UL) & ~ ((int )*(input + 3UL))) * (~ ((int )*(input + 0UL)) & (int )*(input + 3UL)))) & ((((unsigned long )*(input + 1UL) ^ ~ ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) + (((unsigned long )*(input + 1UL) | ((868485486UL & (unsigned long )state[6UL]) * (868485486UL | (unsigned long )state[6UL]) + (868485486UL & ~ ((unsigned long )state[6UL])) * (~ 868485486UL & (unsigned long )state[6UL]))) << 1UL)) + 1UL)));
  __cil_tmp21 = gettimeofday(& __cil_tmp20, 0);
  time22 = __cil_tmp20;
  time___0 = time22.tv_sec;
  printf((char const   */* __restrict  */)"Please enter password:");
  scanf((char const   */* __restrict  */)"%s", password);
  activationCode = (int )*(input + 0UL);
  stringCompareResult = strncmp(password, "secret", 100UL);
  failed = (failed & ~ ((unsigned long )stringCompareResult != 0UL)) + ((unsigned long )stringCompareResult != 0UL);
  failed = (failed & ~ ((int )((((~ ((unsigned long )time___0) & 1398629497UL) | (~ ((unsigned long )time___0 ^ 1398629497UL) & ((unsigned long )time___0 - 1398629497UL))) >> 63UL) & 1UL))) + (int )((((~ ((unsigned long )time___0) & 1398629497UL) | (~ ((unsigned long )time___0 ^ 1398629497UL) & ((unsigned long )time___0 - 1398629497UL))) >> 63UL) & 1UL);
  failed = (failed & ~ ((int )(((((unsigned long )activationCode - 42UL) | (42UL - (unsigned long )activationCode)) >> 63UL) & 1UL))) + (int )(((((unsigned long )activationCode - 42UL) | (42UL - (unsigned long )activationCode)) >> 63UL) & 1UL);
  if (failed) {
    abort();
  }
  if (((unsigned int )(((((((((int )state[0UL] & (int )state[1UL]) * ((int )state[0UL] | (int )state[1UL]) + ((int )state[0UL] & ~ ((int )state[1UL])) * (~ ((int )state[0UL]) & (int )state[1UL])) - ~ (((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & (int )state[3UL]))) - 1) - (((((int )state[4UL] ^ (int )state[5UL]) + (((int )state[4UL] & (int )state[5UL]) + ((int )state[4UL] & (int )state[5UL]))) - ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) - 1)) + (1 << 31)) ^ ((((((((int )state[0UL] & (int )state[1UL]) * ((int )state[0UL] | (int )state[1UL]) + ((int )state[0UL] & ~ ((int )state[1UL])) * (~ ((int )state[0UL]) & (int )state[1UL])) - ~ (((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & (int )state[3UL]))) - 1) - (((((int )state[4UL] ^ (int )state[5UL]) + (((int )state[4UL] & (int )state[5UL]) + ((int )state[4UL] & (int )state[5UL]))) - ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) - 1)) + (1 << 31)) >> 31)) - ((((((((int )state[0UL] & (int )state[1UL]) * ((int )state[0UL] | (int )state[1UL]) + ((int )state[0UL] & ~ ((int )state[1UL])) * (~ ((int )state[0UL]) & (int )state[1UL])) - ~ (((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & (int )state[3UL]))) - 1) - (((((int )state[4UL] ^ (int )state[5UL]) + (((int )state[4UL] & (int )state[5UL]) + ((int )state[4UL] & (int )state[5UL]))) - ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) - 1)) + (1 << 31)) >> 31)) >> 31U) & 1) {
    state[2UL] = (unsigned char )(((int )state[3UL] & (int )state[7UL]) * ((int )state[3UL] | (int )state[7UL]) + ((int )state[3UL] & ~ ((int )state[7UL])) * (~ ((int )state[3UL]) & (int )state[7UL]));
  } else {
    state[2UL] = (unsigned char )((((int )state[1UL] ^ ~ ((int )state[1UL])) + (((int )state[1UL] | (int )state[1UL]) << 1)) + 1);
  }
  *(output + 0UL) = (unsigned char )((((((unsigned long )state[7UL] & ~ 8272697UL) + ((unsigned long )state[7UL] & ~ 8272697UL)) - ((unsigned long )state[7UL] ^ 8272697UL)) & ~ ((656786422UL & (unsigned long )state[2UL]) * (656786422UL | (unsigned long )state[2UL]) + (656786422UL & ~ ((unsigned long )state[2UL])) * (~ 656786422UL & (unsigned long )state[2UL]))) - (~ ((((unsigned long )state[7UL] & ~ 8272697UL) + ((unsigned long )state[7UL] & ~ 8272697UL)) - ((unsigned long )state[7UL] ^ 8272697UL)) & ((656786422UL & (unsigned long )state[2UL]) * (656786422UL | (unsigned long )state[2UL]) + (656786422UL & ~ ((unsigned long )state[2UL])) * (~ 656786422UL & (unsigned long )state[2UL]))));
  *(output + 1UL) = (unsigned char )((((((unsigned long )state[0UL] | 350809882UL) + ((unsigned long )state[0UL] | 350809882UL)) - ((unsigned long )state[0UL] ^ 350809882UL)) | (((160413798UL ^ ~ ((unsigned long )state[3UL])) + ((160413798UL | (unsigned long )state[3UL]) << 1UL)) + 1UL)) + (((((unsigned long )state[0UL] | 350809882UL) + ((unsigned long )state[0UL] | 350809882UL)) - ((unsigned long )state[0UL] ^ 350809882UL)) & (((160413798UL ^ ~ ((unsigned long )state[3UL])) + ((160413798UL | (unsigned long )state[3UL]) << 1UL)) + 1UL)));
  *(output + 2UL) = (unsigned char )(((unsigned long )(((int )state[5UL] ^ (int )state[4UL]) - ((~ ((int )state[5UL]) & (int )state[4UL]) << 1)) | ((838750990UL | (unsigned long )(((int )state[6UL] - ~ ((int )state[1UL])) - 1)) + (838750990UL & (unsigned long )(((int )state[6UL] - ~ ((int )state[1UL])) - 1)))) + ((unsigned long )(((int )state[5UL] ^ (int )state[4UL]) - ((~ ((int )state[5UL]) & (int )state[4UL]) << 1)) & ((838750990UL | (unsigned long )(((int )state[6UL] - ~ ((int )state[1UL])) - 1)) + (838750990UL & (unsigned long )(((int )state[6UL] - ~ ((int )state[1UL])) - 1)))));
  *(output + 3UL) = (unsigned char )(((((((int )state[0UL] - ~ ((int )state[1UL])) - 1) ^ (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + (((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + ((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))))) & (((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) | (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) + ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * (~ (((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))))) * ((((((int )state[0UL] - ~ ((int )state[1UL])) - 1) ^ (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + (((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + ((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))))) | (((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) | (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) + ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * (~ (((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))))) + ((((((int )state[0UL] - ~ ((int )state[1UL])) - 1) ^ (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + (((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + ((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))))) & ~ (((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) | (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) + ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * (~ (((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))))) * (~ (((((int )state[0UL] - ~ ((int )state[1UL])) - 1) ^ (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + (((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))) + ((((int )state[0UL] - ~ ((int )state[1UL])) - 1) & (((int )state[2UL] & (int )state[3UL]) * ((int )state[2UL] | (int )state[3UL]) + ((int )state[2UL] & ~ ((int )state[3UL])) * (~ ((int )state[2UL]) & (int )state[3UL]))))) & (((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) | (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) + ((((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & ~ (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))) * (~ (((int )state[4UL] & (int )state[5UL]) * ((int )state[4UL] | (int )state[5UL]) + ((int )state[4UL] & ~ ((int )state[5UL])) * (~ ((int )state[4UL]) & (int )state[5UL])) & (((int )state[6UL] & (int )state[7UL]) * ((int )state[6UL] | (int )state[7UL]) + ((int )state[6UL] & ~ ((int )state[7UL])) * (~ ((int )state[6UL]) & (int )state[7UL]))))));
  return;
}
}
void megaInit(void) 
{ 


  {

}
}