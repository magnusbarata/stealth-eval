/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct timeval;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int getpagesize() ;
struct _1_main__opaque_Node_1 {
   int data ;
   struct _1_main__opaque_Node_1 *next ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list1_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned long strlen(char const   *s ) ;
void failed(void) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
extern int raise(int sig ) ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
typedef struct _1_main__opaque_Node_1 *_1_main__opaque_List_1;
extern double difftime(long tv1 , long tv0 ) ;
extern int puts(char const   *__s ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern void free(void *ptr ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void exit(int status ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern void signal(int sig , void *func ) ;
struct _1_main__opaque_Node_1 *_1_main__opaque_list2_1  =    (struct _1_main__opaque_Node_1 *)0;
typedef struct _IO_FILE FILE;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern double ceil(double x ) ;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern long write(int filedes , void *buf , unsigned long nbyte ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern long clock(void) ;
extern long time(long *tloc ) ;
extern int rand() ;
extern long read(int filedes , void *buf , unsigned long nbyte ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *malloc(unsigned long size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
void succeeded(void) ;
void megaInit(void) ;
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  char username[256] ;
  char password[256] ;
  char from[256] ;
  char number[256] ;
  int u ;
  int p ;
  int f ;
  int n ;
  int _BARRIER_0 ;
  int r13 ;
  struct _1_main__opaque_Node_1 *p14 ;
  int r15 ;
  struct _1_main__opaque_Node_1 *p16 ;
  int r17 ;
  struct _1_main__opaque_Node_1 *p18 ;
  int _1_main__BEGIN_1 ;
  int _1_main__END_1 ;
  int _1_main__BARRIER_2 ;
  int _1_main__BEGIN_3 ;
  int _1_main__END_3 ;
  int _1_main__BEGIN_4 ;
  int _1_main__END_4 ;
  int _1_main__BEGIN_5 ;
  int _1_main__END_5 ;
  int _1_main__BEGIN_6 ;
  int _1_main__END_6 ;
  int _1_main__BEGIN_7 ;
  int _1_main__END_7 ;
  int _1_main__BEGIN_8 ;
  int _1_main__END_8 ;
  int _1_main__BEGIN_9 ;
  int _1_main__END_9 ;
  int _1_main__BEGIN_10 ;
  int _1_main__END_10 ;
  int _1_main__BEGIN_11 ;
  int _1_main__END_11 ;
  int _1_main__BEGIN_12 ;
  int _1_main__END_12 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_1 = 1;
  r13 = rand();
  p14 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p14 != (struct _1_main__opaque_Node_1 *)0UL) {
    p14->data = r13;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p14->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p14;
    } else {
      p14->next = p14;
      _1_main__opaque_list1_1 = p14;
    }
  } else {

  }
  r15 = rand();
  p16 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p16 != (struct _1_main__opaque_Node_1 *)0UL) {
    p16->data = r15;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p16->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p16;
    } else {
      p16->next = p16;
      _1_main__opaque_list1_1 = p16;
    }
  } else {

  }
  r17 = rand();
  p18 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p18 != (struct _1_main__opaque_Node_1 *)0UL) {
    p18->data = r17;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p18->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p18;
    } else {
      p18->next = p18;
      _1_main__opaque_list1_1 = p18;
    }
  } else {

  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
  _1_main__END_1 = 1;
  }
  _1_main__BARRIER_2 = 1;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_8 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_8 = 1;
  }
  printf((char const   */* __restrict  */)"Enter username: ");
  scanf((char const   */* __restrict  */)"%s", username);
  printf((char const   */* __restrict  */)"Enter password: ");
  scanf((char const   */* __restrict  */)"%s", password);
  printf((char const   */* __restrict  */)"Enter from: ");
  scanf((char const   */* __restrict  */)"%s", from);
  printf((char const   */* __restrict  */)"Enter number: ");
  scanf((char const   */* __restrict  */)"%s", number);
  n = atoi((char const   *)(number));
  u = strcmp((char const   *)(username), "admin");
  p = strcmp((char const   *)(password), "letmein");
  f = strcmp((char const   *)(from), "Japan");
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_10 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_10 = 1;
  }

  if (u == 0) {
    if (p == 0) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__BEGIN_7 = 1;
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      _1_main__END_7 = 1;
      }

      if (f == 0) {
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) >= u) {
            if ((n == 1234) == p) {
              {  /* __blockattribute__(__ATOMIC__)*/ 
              _1_main__BEGIN_12 = 1 * r17;
              _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + -1;
              _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
              _1_main__END_12 = 8;
              }

              while (1) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  {  /* __blockattribute__(__ATOMIC__)*/ 
                  _1_main__BEGIN_9 = 5;
                  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + -1;
                  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
                  _1_main__END_9 = r15;
                  }

                }

              }
              while (1) {
                {  /* __blockattribute__(__ATOMIC__)*/ 
                _1_main__BEGIN_5 = 1 + n;
                _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
                _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - 1;
                _1_main__END_5 = 1 + n;
                }

              }
              failed();
            } else {
              while (1) {
                {  /* __blockattribute__(__ATOMIC__)*/ 
                _1_main__BEGIN_4 = p;
                _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
                _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
                _1_main__END_4 = 1 * 5;
                }

              }

              if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) > argc) {

              } else {
                succeeded();
              }
            }
          } else {
            while (1) {
              if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) != f) {
                u = main(argc - r17, argv - -1, argv + 1);
              } else {

              }
              while (((n == 1234) < argc) != u) {

              }
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                failed();
              }
              while (1) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  failed();
                } else {

                }
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  failed();
                }
                {  /* __blockattribute__(__ATOMIC__)*/ 
                _1_main__BEGIN_4 = 1;
                _1_main__opaque_list1_1 = (_1_main__opaque_list1_1->next + 1) - 1;
                _1_main__opaque_list2_1 = (_1_main__opaque_list2_1->next + -1) - 1;
                _1_main__END_4 = r13;
                }

              }
              succeeded();
            }
          }
        } else
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

            } else {
              u = main(argc, argv, argv);
            }
            if ((n == 1234) < argc) {

            } else {
              break;
            }
            {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

            } else {
              failed();
            }
            {  /* __blockattribute__(__ATOMIC__)*/ 
            _1_main__BEGIN_4 = u;
            _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
            _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + -1;
            _1_main__END_4 = 1 * 4;
            }
            }
            succeeded();
          }
        } else
        if (n == 1234) {
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__BEGIN_4 = 1;
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
          _1_main__END_4 = 1;
          }

          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            succeeded();
          } else {

          }
        } else {
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__BEGIN_12 = 1;
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
          _1_main__END_12 = 1;
          }
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__BEGIN_9 = 1;
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
          _1_main__END_9 = 1;
          }
          {  /* __blockattribute__(__ATOMIC__)*/ 
          _1_main__BEGIN_5 = 1;
          _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
          _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
          _1_main__END_5 = 1;
          }
          failed();
        }
      } else
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        __asm__  volatile   (".byte 0x9c,0x2d,0x1a":);
      } else {
        failed();
      }
    } else {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__BEGIN_6 = 1;
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      _1_main__END_6 = 1;
      }
      failed();
    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_11 = 1;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    _1_main__END_11 = 1;
    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_3 = 1;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    _1_main__END_3 = 1;
    }
    failed();
  }
  return (0);
}
}
void succeeded(void) 
{ 


  {
  puts("auth succeeded!");
  return;
}
}
void failed(void) 
{ 


  {
  puts("auth failed.");
  return;
}
}
