/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern double ceil(double x ) ;
extern int ( /* missing proto */  gettimeofday)() ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
typedef long __suseconds_t;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern unsigned long strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void perror(char const   *str ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int ( /* missing proto */  strncmp)() ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern long write(int filedes , void *buf , unsigned long nbyte ) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern int raise(int sig ) ;
char **_global_envp  =    (char **)0;
extern float strtof(char const   *str , char const   *endptr ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
typedef long __time_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
extern long clock(void) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern int unlink(char const   *filename ) ;
extern long time(long *tloc ) ;
extern int rand() ;
void function_1(unsigned long *input , unsigned long *output ) ;
extern long read(int filedes , void *buf , unsigned long nbyte ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double sqrt(double x ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *malloc(unsigned long size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                    int __base ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern void free(void *ptr ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern void signal(int sig , void *func ) ;
extern int atoi(char const   *s ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
void megaInit(void) ;
void megaInit(void) 
{ 


  {

}
}
void function_1(unsigned long *input , unsigned long *output ) 
{ 
  unsigned long state[8] ;
  long time___0 ;
  char password[100] ;
  unsigned int tmp ;
  int failed ;
  int stringCompareResult ;
  int activationCode ;
  struct timeval __cil_tmp20 ;
  int __cil_tmp21 ;
  struct timeval time22 ;
  char randomFunsSwapPartCopy23 ;

  {
  password[0] = (char )'\000';
  tmp = 1U;
  while (! ((int )((((~ 100U | tmp) & ((100U ^ tmp) | ~ (tmp - 100U))) >> 31U) & 1U))) {
    password[tmp] = (char)0;
    tmp = (tmp - ~ 1U) - 1U;
  }
  failed = 0;
  state[0UL] = (((*(input + 2UL) ^ 369812431UL) + ((*(input + 2UL) & 369812431UL) << 1UL)) - ~ 1343232709UL) - 1UL;
  state[1UL] = (*(input + 0UL) - ~ ((state[0UL] - ~ *(input + 3UL)) - 1UL)) - 1UL;
  state[2UL] = (((*(input + 1UL) ^ state[1UL]) + ((*(input + 1UL) & state[1UL]) << 1UL)) - ~ 1591870014UL) - 1UL;
  state[3UL] = (*(input + 2UL) ^ ((298095812UL ^ *(input + 0UL)) + ((298095812UL & *(input + 0UL)) + (298095812UL & *(input + 0UL))))) + ((*(input + 2UL) & ((298095812UL ^ *(input + 0UL)) + ((298095812UL & *(input + 0UL)) + (298095812UL & *(input + 0UL))))) << 1UL);
  state[4UL] = (*(input + 3UL) ^ 1048563117UL) + ((*(input + 3UL) & 1048563117UL) << 1UL);
  state[5UL] = (*(input + 1UL) - ~ 439677065UL) - 1UL;
  state[6UL] = (*(input + 2UL) ^ 1016381247UL) - ((~ *(input + 2UL) & 1016381247UL) << 1UL);
  state[7UL] = (((((*(input + 0UL) ^ ~ *(input + 3UL)) + ((*(input + 0UL) | *(input + 3UL)) + (*(input + 0UL) | *(input + 3UL)))) + 1UL) ^ ~ ((*(input + 1UL) ^ (((868485486UL | state[6UL]) << 1UL) - (868485486UL ^ state[6UL]))) + ((*(input + 1UL) & (((868485486UL | state[6UL]) << 1UL) - (868485486UL ^ state[6UL]))) << 1UL))) + (((((*(input + 0UL) ^ ~ *(input + 3UL)) + ((*(input + 0UL) | *(input + 3UL)) + (*(input + 0UL) | *(input + 3UL)))) + 1UL) | ((*(input + 1UL) ^ (((868485486UL | state[6UL]) << 1UL) - (868485486UL ^ state[6UL]))) + ((*(input + 1UL) & (((868485486UL | state[6UL]) << 1UL) - (868485486UL ^ state[6UL]))) << 1UL))) << 1UL)) + 1UL;
  __cil_tmp21 = gettimeofday(& __cil_tmp20, 0);
  time22 = __cil_tmp20;
  time___0 = time22.tv_sec;
  printf((char const   */* __restrict  */)"Please enter password:");
  scanf((char const   */* __restrict  */)"%s", password);
  activationCode = (int )*(input + 0UL);
  stringCompareResult = strncmp(password, "secret", 100UL);
  failed = (failed & ~ ((unsigned long )stringCompareResult != 0UL)) + ((unsigned long )stringCompareResult != 0UL);
  failed = (failed & ~ ((int )((((~ ((unsigned long )time___0) & 1398629497UL) | ((~ ((unsigned long )time___0) | 1398629497UL) & ((unsigned long )time___0 - 1398629497UL))) >> 63UL) & 1UL))) + (int )((((~ ((unsigned long )time___0) & 1398629497UL) | ((~ ((unsigned long )time___0) | 1398629497UL) & ((unsigned long )time___0 - 1398629497UL))) >> 63UL) & 1UL);
  failed = ((failed + (int )(((((unsigned long )activationCode - 42UL) | (42UL - (unsigned long )activationCode)) >> 63UL) & 1UL)) + 1) + ((- failed - 1) | (- ((int )(((((unsigned long )activationCode - 42UL) | (42UL - (unsigned long )activationCode)) >> 63UL) & 1UL)) - 1));
  if (failed) {
    abort();
  }
  if ((int )((((((((((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) ^ ~ ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) + (((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) | ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) << 1UL)) + 1UL) - ((((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) ^ ~ ((state[6UL] + ~ state[7UL]) + 1UL)) + (((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) | ((state[6UL] + ~ state[7UL]) + 1UL)) << 1UL)) + 1UL)) + ((long )(((((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) ^ ~ ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) + (((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) | ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) << 1UL)) + 1UL) - ((((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) ^ ~ ((state[6UL] + ~ state[7UL]) + 1UL)) + (((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) | ((state[6UL] + ~ state[7UL]) + 1UL)) << 1UL)) + 1UL)) >> 63L)) ^ ((long )(((((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) ^ ~ ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) + (((((state[0UL] | state[1UL]) << 1UL) - (state[0UL] ^ state[1UL])) | ((state[2UL] ^ state[3UL]) - ((~ state[2UL] & state[3UL]) + (~ state[2UL] & state[3UL])))) << 1UL)) + 1UL) - ((((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) ^ ~ ((state[6UL] + ~ state[7UL]) + 1UL)) + (((((state[4UL] ^ ~ state[5UL]) + ((state[4UL] | state[5UL]) + (state[4UL] | state[5UL]))) + 1UL) | ((state[6UL] + ~ state[7UL]) + 1UL)) << 1UL)) + 1UL)) >> 63L)) - 1UL) >> 63UL) & 1UL)) {
    if ((int )((((((long )((((((state[0UL] ^ ~ state[1UL]) + ((state[0UL] | state[1UL]) + (state[0UL] | state[1UL]))) + 1UL) - ~ ((state[2UL] + ~ state[3UL]) + 1UL)) - 1UL) - ((((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) ^ ((state[6UL] - ~ state[7UL]) - 1UL)) - ((~ ((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) & ((state[6UL] - ~ state[7UL]) - 1UL)) << 1UL))) >> 63L) - ((((((state[0UL] ^ ~ state[1UL]) + ((state[0UL] | state[1UL]) + (state[0UL] | state[1UL]))) + 1UL) - ~ ((state[2UL] + ~ state[3UL]) + 1UL)) - 1UL) - ((((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) ^ ((state[6UL] - ~ state[7UL]) - 1UL)) - ((~ ((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) & ((state[6UL] - ~ state[7UL]) - 1UL)) << 1UL)))) ^ ((long )((((((state[0UL] ^ ~ state[1UL]) + ((state[0UL] | state[1UL]) + (state[0UL] | state[1UL]))) + 1UL) - ~ ((state[2UL] + ~ state[3UL]) + 1UL)) - 1UL) - ((((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) ^ ((state[6UL] - ~ state[7UL]) - 1UL)) - ((~ ((state[4UL] | state[5UL]) + (state[4UL] & state[5UL])) & ((state[6UL] - ~ state[7UL]) - 1UL)) << 1UL))) >> 63L)) >> 63UL) & 1UL)) {
      if ((int )(((((((((state[0UL] ^ state[1UL]) - ((~ state[0UL] & state[1UL]) << 1UL)) ^ ~ (((state[2UL] ^ ~ state[3UL]) + ((state[2UL] | state[3UL]) << 1UL)) + 1UL)) + ((((state[0UL] ^ state[1UL]) - ((~ state[0UL] & state[1UL]) << 1UL)) | (((state[2UL] ^ ~ state[3UL]) + ((state[2UL] | state[3UL]) << 1UL)) + 1UL)) << 1UL)) + 1UL) - (((((state[4UL] + ~ state[5UL]) + 1UL) | ((state[6UL] - ~ state[7UL]) - 1UL)) << 1UL) - (((state[4UL] + ~ state[5UL]) + 1UL) ^ ((state[6UL] - ~ state[7UL]) - 1UL)))) | ((((((state[4UL] + ~ state[5UL]) + 1UL) | ((state[6UL] - ~ state[7UL]) - 1UL)) << 1UL) - (((state[4UL] + ~ state[5UL]) + 1UL) ^ ((state[6UL] - ~ state[7UL]) - 1UL))) - (((((state[0UL] ^ state[1UL]) - ((~ state[0UL] & state[1UL]) << 1UL)) ^ ~ (((state[2UL] ^ ~ state[3UL]) + ((state[2UL] | state[3UL]) << 1UL)) + 1UL)) + ((((state[0UL] ^ state[1UL]) - ((~ state[0UL] & state[1UL]) << 1UL)) | (((state[2UL] ^ ~ state[3UL]) + ((state[2UL] | state[3UL]) << 1UL)) + 1UL)) << 1UL)) + 1UL))) >> 63UL) & 1UL)) {
        state[5UL] = (state[1UL] & ~ state[6UL]) - (~ state[1UL] & state[6UL]);
      } else {
        state[3UL] = (state[0UL] - ~ state[0UL]) - 1UL;
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
  *(output + 0UL) = ((state[6UL] & ~ state[7UL]) + (state[6UL] & ~ state[7UL])) - (state[6UL] ^ state[7UL]);
  *(output + 1UL) = (state[5UL] & ~ ((908850774UL + ~ state[3UL]) + 1UL)) - (~ state[5UL] & ((908850774UL + ~ state[3UL]) + 1UL));
  *(output + 2UL) = ((state[2UL] | ((660129543UL + ~ state[1UL]) + 1UL)) + (state[2UL] | ((660129543UL + ~ state[1UL]) + 1UL))) - (state[2UL] ^ ((660129543UL + ~ state[1UL]) + 1UL));
  *(output + 3UL) = (((state[0UL] - ~ state[4UL]) - 1UL) & ~ 1523323738UL) - (~ ((state[0UL] - ~ state[4UL]) - 1UL) & 1523323738UL);
  return;
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  unsigned long input[4] ;
  unsigned long output[4] ;
  int randomFuns_i5 ;
  unsigned long randomFuns_value6 ;
  int randomFuns_main_i7 ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (((unsigned int )((argc - 5) | (5 - argc)) >> 31U) & 1) {
    printf((char const   */* __restrict  */)"Call this program with %i arguments\n",
           4);
    exit(-1);
  }
  randomFuns_i5 = 0;
  while (((unsigned int )((randomFuns_i5 & ~ 4) | (~ (randomFuns_i5 ^ 4) & (randomFuns_i5 - 4))) >> 31U) & 1) {
    randomFuns_value6 = strtoul((char const   */* __restrict  */)*(argv + (((randomFuns_i5 ^ ~ 1) + ((randomFuns_i5 | 1) << 1)) + 1)),
                                (char **/* __restrict  */)0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 = ((randomFuns_i5 | 1) << 1) - (randomFuns_i5 ^ 1);
  }
  function_1((unsigned long *)(input), (unsigned long *)(output));
  if ((int )(((((output[1] - 0xfffffffff5cd8f75UL) + (1UL << 63)) - ((((output[1] - 0xfffffffff5cd8f75UL) + (1UL << 63)) + ((output[1] - 0xfffffffff5cd8f75UL) + (1UL << 63))) & ((long )((output[1] - 0xfffffffff5cd8f75UL) + (1UL << 63)) >> 63L))) >> 63UL) & 1UL)) {
    printf((char const   */* __restrict  */)"You win!\n");
  }
  randomFuns_main_i7 = 0;
  while (((unsigned int )((randomFuns_main_i7 - 4) ^ ((randomFuns_main_i7 ^ 4) & ((randomFuns_main_i7 - 4) ^ randomFuns_main_i7))) >> 31U) & 1) {
    printf((char const   */* __restrict  */)"%lu\n", output[randomFuns_main_i7]);
    randomFuns_main_i7 = (randomFuns_main_i7 - ~ 1) - 1;
  }
  return (0);
}
}