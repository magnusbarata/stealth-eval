/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct _IO_marker;
struct timeval;
struct tm;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
void ACTIVATION_CODE_i$nit(void) ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int getpagesize() ;
struct _1_main__opaque_Node_1 {
   int data ;
   struct _1_main__opaque_Node_1 *next ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list1_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern unsigned long strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
void failed(void) ;
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char *tm_zone ;
};
struct tm EXPIRE_TIME ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(int *cond ) ;
typedef long __time_t;
typedef __time_t time_t;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) mktime)(struct tm *__tp ) ;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
int checklicense(void) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
typedef struct _1_main__opaque_Node_1 *_1_main__opaque_List_1;
void EXPIRE_TIME_i$nit(void) ;
extern double difftime(long tv1 , long tv0 ) ;
typedef struct _IO_FILE FILE;
extern int fflush(FILE *__stream ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
extern struct _IO_FILE *stdout ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void exit(int status ) ;
extern void signal(int sig , void *func ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
typedef long __off64_t;
struct _1_main__opaque_Node_1 *_1_main__opaque_list2_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern struct _IO_FILE *stdin ;
extern double ceil(double x ) ;
void renewlicense(void) ;
typedef unsigned long size_t;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
unsigned int ACTIVATION_CODE ;
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
extern long clock(void) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern int rand() ;
extern long read(int filedes , void *buf , unsigned long nbyte ) ;
typedef void _IO_lock_t;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double sqrt(double x ) ;
typedef long __off_t;
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
extern void *malloc(unsigned long size ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
void megaInit(void) ;
void ACTIVATION_CODE_i$nit(void) 
{ 


  {
  ACTIVATION_CODE = 891022408U;
}
}
int checklicense(void) 
{ 
  time_t current_time ;
  char code[256] ;
  int tmp ;
  time_t tmp___0 ;

  {
  time(& current_time);
  tmp___0 = mktime(& EXPIRE_TIME);
  if (current_time > tmp___0) {
    printf((char const   */* __restrict  */)"Your license is expired.\n");
    fflush(stdout);
    while (1) {
      printf((char const   */* __restrict  */)"Enter activation code: ");
      fgets((char */* __restrict  */)(code), (int )sizeof(code), (FILE */* __restrict  */)stdin);
      tmp = atoi((char const   *)(code));
      if ((unsigned int )tmp == ACTIVATION_CODE) {
        renewlicense();
        return (0);
      } else {
        failed();
      }
      fflush(stdout);
    }
  }
  return (0);
}
}
void failed(void) 
{ 


  {
  printf((char const   */* __restrict  */)"Wrong code.\n");
  return;
}
}
void EXPIRE_TIME_i$nit(void) 
{ 


  {
  EXPIRE_TIME.tm_sec = 0;
  EXPIRE_TIME.tm_min = 0;
  EXPIRE_TIME.tm_hour = 0;
  EXPIRE_TIME.tm_mday = 10;
  EXPIRE_TIME.tm_mon = 8;
  EXPIRE_TIME.tm_year = 115;
  EXPIRE_TIME.tm_wday = 0;
  EXPIRE_TIME.tm_yday = 0;
  EXPIRE_TIME.tm_isdst = 0;
  EXPIRE_TIME.tm_gmtoff = 0L;
  EXPIRE_TIME.tm_zone = (char const   *)0;
}
}
void megaInit(void) 
{ 


  {
  ACTIVATION_CODE_i$nit();
  EXPIRE_TIME_i$nit();
}
}
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) 
{ 
  int result ;
  int _BARRIER_0 ;
  int r6 ;
  struct _1_main__opaque_Node_1 *p7 ;
  int r8 ;
  struct _1_main__opaque_Node_1 *p9 ;
  int r10 ;
  struct _1_main__opaque_Node_1 *p11 ;
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
  _global_argc = _formal_argc;
  _global_argv = _formal_argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_1 = 1;
  r6 = rand();
  p7 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p7 != (struct _1_main__opaque_Node_1 *)0UL) {
    p7->data = r6;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p7->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p7;
    } else {
      p7->next = p7;
      _1_main__opaque_list1_1 = p7;
    }
  } else {

  }
  r8 = rand();
  p9 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p9 != (struct _1_main__opaque_Node_1 *)0UL) {
    p9->data = r8;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p9->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p9;
    } else {
      p9->next = p9;
      _1_main__opaque_list1_1 = p9;
    }
  } else {

  }
  r10 = rand();
  p11 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
  if (p11 != (struct _1_main__opaque_Node_1 *)0UL) {
    p11->data = r10;
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      p11->next = _1_main__opaque_list1_1->next;
      _1_main__opaque_list1_1->next = p11;
    } else {
      p11->next = p11;
      _1_main__opaque_list1_1 = p11;
    }
  } else {

  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
  _1_main__END_1 = 1;
  }
  _1_main__BARRIER_2 = 1;

  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    failed();
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

  } else {
    failed();
  }
  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    __asm__  volatile   (".byte 0x1,0x48,0x8d,0x3d,0x34":);
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_8 = 1;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    _1_main__END_8 = 1;
    }

  }

  {
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

  } else
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    while (1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__BEGIN_11 = 9;
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next + 1;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next - 1;
      _1_main__END_11 = 1 << r10;
      }

    }
  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_11 = 1;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    _1_main__END_11 = 1;
    }

  }
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_7 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_7 = 1;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_10 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_10 = 1;
  }

  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    __asm__  volatile   (".byte 0x7c,0x30,0x0,0x0,0x44,0x89":);
  } else
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      {  /* __blockattribute__(__ATOMIC__)*/ 
      _1_main__BEGIN_9 = 1;
      _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
      _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
      _1_main__END_9 = 1;
      }

    } else {
      __asm__  volatile   (".byte 0xe3,0xb5,0xef,0x53,0xff,0xcd":);
    }
  } else {
    __asm__  volatile   (".byte 0xb9,0xcd,0xcb,0x62,0xa0":);
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_5 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_5 = 1;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_12 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_12 = 1;
  }

  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_3 = 1 >> _formal_argc;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next - -1;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next + 1;
    _1_main__END_3 = 1 * r8;
    }

  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__BEGIN_3 = 1;
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    _1_main__END_3 = 1;
    }

  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    result = checklicense();
  } else {

  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_6 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_6 = 1;
  }
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__BEGIN_4 = 1;
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  _1_main__END_4 = 1;
  }

  return (result);
}
}
void renewlicense(void) 
{ 


  {
  printf((char const   */* __restrict  */)"Your license is renewed.\n");
  return;
}
}
