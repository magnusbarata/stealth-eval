/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

union _1_failed_$node;
union _1_main_$node;
struct _IO_FILE;
enum _1_renewlicense_$op;
union _1_checklicense_$node;
union _1_renewlicense_$node;
struct _IO_FILE;
struct _IO_marker;
struct timeval;
struct tm;
enum _1_checklicense_$op;
enum _1_failed_$op;
enum _1_main_$op;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern int pthread_cond_broadcast(int *cond ) ;
char **_global_argv  =    (char **)0;
void ACTIVATION_CODE_i$nit(void) ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int getpagesize() ;
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
union _1_main_$node {
   char _char ;
   unsigned int _unsigned_int ;
   unsigned char _unsigned_char ;
   long _long ;
   unsigned long _unsigned_long ;
   void *_void_star ;
   unsigned short _unsigned_short ;
   unsigned long long _unsigned_long_long ;
   signed char _signed_char ;
   long long _long_long ;
   int _int ;
   short _short ;
};
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
enum _1_renewlicense_$op {
    _1_renewlicense__convert_void_star2void_star$left_STA_0$result_STA_0 = 175,
    _1_renewlicense__goto$label_LAB_0 = 220,
    _1_renewlicense__call$func_LIT_0 = 231,
    _1_renewlicense__local$result_STA_0$value_LIT_0 = 18,
    _1_renewlicense__string$result_STA_0$value_LIT_0 = 128,
    _1_renewlicense__store_void_star$left_STA_0$right_STA_1 = 83,
    _1_renewlicense__returnVoid$ = 91
} ;
unsigned char _1_renewlicense_$array[1][23]  = { {        _1_renewlicense__string$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_renewlicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_renewlicense__local$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_renewlicense__store_void_star$left_STA_0$right_STA_1, 
            _1_renewlicense__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_renewlicense__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_renewlicense__returnVoid$}};
extern int printf(char const   * __restrict  __format  , ...) ;
int _global_argc  =    0;
char const   *_1_renewlicense_$strings  =    "Your license is renewed.\n\000";
typedef long __time_t;
typedef __time_t time_t;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) mktime)(struct tm *__tp ) ;
extern int pthread_cond_signal(int *cond ) ;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
extern int raise(int sig ) ;
int checklicense(void) ;
extern int scanf(char const   *format  , ...) ;
char **_global_envp  =    (char **)0;
extern int unlink(char const   *filename ) ;
void EXPIRE_TIME_i$nit(void) ;
extern double difftime(long tv1 , long tv0 ) ;
typedef struct _IO_FILE FILE;
extern int fflush(FILE *__stream ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
extern struct _IO_FILE *stdout ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern void free(void *ptr ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) ;
enum _1_failed_$op {
    _1_failed__goto$label_LAB_0 = 215,
    _1_failed__call$func_LIT_0 = 208,
    _1_failed__returnVoid$ = 11,
    _1_failed__convert_void_star2void_star$left_STA_0$result_STA_0 = 82,
    _1_failed__local$result_STA_0$value_LIT_0 = 108,
    _1_failed__store_void_star$left_STA_0$right_STA_1 = 24,
    _1_failed__string$result_STA_0$value_LIT_0 = 14
} ;
unsigned char _1_failed_$array[1][23]  = { {        _1_failed__string$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_failed__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_failed__local$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_failed__store_void_star$left_STA_0$right_STA_1, 
            _1_failed__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_failed__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_failed__returnVoid$}};
typedef long __off64_t;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern struct _IO_FILE *stdin ;
extern double ceil(double x ) ;
void renewlicense(void) ;
enum _1_checklicense_$op {
    _1_checklicense__load_void_star$left_STA_0$result_STA_0 = 111,
    _1_checklicense__goto$label_LAB_0 = 217,
    _1_checklicense__global$result_STA_0$value_LIT_0 = 193,
    _1_checklicense__store_long$right_STA_0$left_STA_1 = 211,
    _1_checklicense__constant_int$result_STA_0$value_LIT_0 = 21,
    _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0 = 137,
    _1_checklicense__store_int$right_STA_0$left_STA_1 = 146,
    _1_checklicense__return_int$expr_STA_0 = 181,
    _1_checklicense__local$result_STA_0$value_LIT_0 = 203,
    _1_checklicense__PlusPI_void_star_unsigned_long2void_star$left_STA_0$result_STA_0$right_STA_1 = 24,
    _1_checklicense__branchIfTrue$expr_STA_0$label_LAB_0 = 226,
    _1_checklicense__load_int$left_STA_0$result_STA_0 = 61,
    _1_checklicense__load_long$left_STA_0$result_STA_0 = 237,
    _1_checklicense__call$func_LIT_0 = 40,
    _1_checklicense__string$result_STA_0$value_LIT_0 = 55,
    _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0 = 36,
    _1_checklicense__constant_void_star$result_STA_0$value_LIT_0 = 159,
    _1_checklicense__Gt_long_long2int$right_STA_0$result_STA_0$left_STA_1 = 16,
    _1_checklicense__store_void_star$right_STA_0$left_STA_1 = 35,
    _1_checklicense__load_unsigned_int$left_STA_0$result_STA_0 = 20,
    _1_checklicense__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1 = 220,
    _1_checklicense__PlusPI_void_star_int2void_star$left_STA_0$result_STA_0$right_STA_1 = 19,
    _1_checklicense__Eq_unsigned_int_unsigned_int2int$left_STA_0$result_STA_0$right_STA_1 = 95,
    _1_checklicense__convert_int2unsigned_int$left_STA_0$result_STA_0 = 82
} ;
typedef unsigned long size_t;
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
unsigned int ACTIVATION_CODE ;
enum _1_main_$op {
    _1_main__load_int$left_STA_0$result_STA_0 = 113,
    _1_main__store_int$right_STA_0$left_STA_1 = 77,
    _1_main__local$result_STA_0$value_LIT_0 = 142,
    _1_main__return_int$expr_STA_0 = 239,
    _1_main__call$func_LIT_0 = 27,
    _1_main__goto$label_LAB_0 = 63
} ;
unsigned char _1_main_$array[1][29]  = { {        _1_main__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)24,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)28, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0, 
            _1_main__store_int$right_STA_0$left_STA_1,        _1_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)24, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0, 
            _1_main__return_int$expr_STA_0}};
union _1_renewlicense_$node {
   char _char ;
   unsigned int _unsigned_int ;
   unsigned char _unsigned_char ;
   long _long ;
   unsigned long _unsigned_long ;
   void *_void_star ;
   unsigned short _unsigned_short ;
   unsigned long long _unsigned_long_long ;
   signed char _signed_char ;
   long long _long_long ;
   int _int ;
   short _short ;
};
union _1_checklicense_$node {
   char _char ;
   unsigned int _unsigned_int ;
   unsigned char _unsigned_char ;
   long _long ;
   unsigned long _unsigned_long ;
   void *_void_star ;
   unsigned short _unsigned_short ;
   unsigned long long _unsigned_long_long ;
   signed char _signed_char ;
   long long _long_long ;
   int _int ;
   short _short ;
};
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void perror(char const   *str ) ;
extern long write(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
unsigned char _1_checklicense_$array[1][362]  = { {        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__global$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0, 
            (unsigned char)2,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)24,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)32,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__load_long$left_STA_0$result_STA_0,        _1_checklicense__store_long$right_STA_0$left_STA_1, 
            _1_checklicense__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__load_long$left_STA_0$result_STA_0,        _1_checklicense__local$result_STA_0$value_LIT_0, 
            (unsigned char)24,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__load_long$left_STA_0$result_STA_0,        _1_checklicense__Gt_long_long2int$right_STA_0$result_STA_0$left_STA_1,        _1_checklicense__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)9, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__goto$label_LAB_0, 
            (unsigned char)15,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)40,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__string$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1, 
            _1_checklicense__call$func_LIT_0,        (unsigned char)3,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)48,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__global$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__load_void_star$left_STA_0$result_STA_0, 
            _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__goto$label_LAB_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0, 
            (unsigned char)56,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__string$result_STA_0$value_LIT_0,        (unsigned char)26,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0, 
            (unsigned char)5,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)64,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _1_checklicense__PlusPI_void_star_unsigned_long2void_star$left_STA_0$result_STA_0$right_STA_1,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)72, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__PlusPI_void_star_int2void_star$left_STA_0$result_STA_0$right_STA_1, 
            _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)72, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__global$result_STA_0$value_LIT_0, 
            (unsigned char)2,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__load_void_star$left_STA_0$result_STA_0,        _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0, 
            (unsigned char)6,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)80,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__constant_void_star$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _1_checklicense__PlusPI_void_star_unsigned_long2void_star$left_STA_0$result_STA_0$right_STA_1,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)72, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__PlusPI_void_star_int2void_star$left_STA_0$result_STA_0$right_STA_1, 
            _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1,        _1_checklicense__call$func_LIT_0,        (unsigned char)7, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0, 
            (unsigned char)88,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)92,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__load_int$left_STA_0$result_STA_0,        _1_checklicense__store_int$right_STA_0$left_STA_1,        _1_checklicense__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__global$result_STA_0$value_LIT_0,        (unsigned char)3,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__load_unsigned_int$left_STA_0$result_STA_0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)88, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__load_int$left_STA_0$result_STA_0, 
            _1_checklicense__convert_int2unsigned_int$left_STA_0$result_STA_0,        _1_checklicense__Eq_unsigned_int_unsigned_int2int$left_STA_0$result_STA_0$right_STA_1,        _1_checklicense__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)9, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__goto$label_LAB_0, 
            (unsigned char)30,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__call$func_LIT_0,        (unsigned char)8,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)96,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__store_int$right_STA_0$left_STA_1, 
            _1_checklicense__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__goto$label_LAB_0,        (unsigned char)57,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__call$func_LIT_0,        (unsigned char)9, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__local$result_STA_0$value_LIT_0,        (unsigned char)104,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_checklicense__load_void_star$left_STA_0$result_STA_0,        _1_checklicense__store_void_star$right_STA_0$left_STA_1, 
            _1_checklicense__call$func_LIT_0,        (unsigned char)10,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__goto$label_LAB_0,        (unsigned char)37,        (unsigned char)255, 
            (unsigned char)255,        (unsigned char)255,        _1_checklicense__goto$label_LAB_0,        (unsigned char)32, 
            (unsigned char)255,        (unsigned char)255,        (unsigned char)255,        _1_checklicense__local$result_STA_0$value_LIT_0, 
            (unsigned char)96,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_checklicense__store_int$right_STA_0$left_STA_1,        _1_checklicense__goto$label_LAB_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_checklicense__local$result_STA_0$value_LIT_0, 
            (unsigned char)96,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            _1_checklicense__load_int$left_STA_0$result_STA_0,        _1_checklicense__return_int$expr_STA_0}};
char const   *_1_failed_$strings  =    "Wrong code.\n\000";
extern unsigned long strnlen(char const   *s ,
                             unsigned long maxlen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern long clock(void) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern int rand() ;
extern long read(int filedes , void *buf , unsigned long nbyte ) ;
typedef void _IO_lock_t;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
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
char const   *_1_main_$strings  =    "";
extern int pthread_mutex_unlock(int *mutex ) ;
union _1_failed_$node {
   char _char ;
   unsigned int _unsigned_int ;
   unsigned char _unsigned_char ;
   long _long ;
   unsigned long _unsigned_long ;
   void *_void_star ;
   unsigned short _unsigned_short ;
   unsigned long long _unsigned_long_long ;
   signed char _signed_char ;
   long long _long_long ;
   int _int ;
   short _short ;
};
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
char const   *_1_checklicense_$strings  =    "Your license is expired.\n\000Enter activation code: \000";
void megaInit(void) ;
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
void failed(void) 
{ 
  char _1_failed_$locals[8] ;
  union _1_failed_$node _1_failed_$stack[1][32] ;
  union _1_failed_$node *_1_failed_$sp[1] ;
  unsigned char *_1_failed_$pc[1] ;

  {
  _1_failed_$sp[0] = _1_failed_$stack[0];
  _1_failed_$pc[0] = _1_failed_$array[0];
  while (1) {
    switch (*(_1_failed_$pc[0])) {
    case _1_failed__string$result_STA_0$value_LIT_0: 
    (_1_failed_$pc[0]) ++;
    (_1_failed_$sp[0] + 1)->_void_star = (void *)(_1_failed_$strings + *((int *)_1_failed_$pc[0]));
    (_1_failed_$sp[0]) ++;
    _1_failed_$pc[0] += 4;
    break;
    case _1_failed__returnVoid$: 
    (_1_failed_$pc[0]) ++;
    return;
    break;
    case _1_failed__call$func_LIT_0: 
    (_1_failed_$pc[0]) ++;
    switch (*((int *)_1_failed_$pc[0])) {
    case 1: 
    printf(*((char const   * __restrict  *)(_1_failed_$locals + 0)));
    break;
    }
    _1_failed_$pc[0] += 4;
    break;
    case _1_failed__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_failed_$pc[0]) ++;
    (_1_failed_$sp[0] + 0)->_void_star = (_1_failed_$sp[0] + 0)->_void_star;
    break;
    case _1_failed__goto$label_LAB_0: 
    (_1_failed_$pc[0]) ++;
    _1_failed_$pc[0] += *((int *)_1_failed_$pc[0]);
    break;
    case _1_failed__store_void_star$left_STA_0$right_STA_1: 
    (_1_failed_$pc[0]) ++;
    *((void **)(_1_failed_$sp[0] + 0)->_void_star) = (_1_failed_$sp[0] + -1)->_void_star;
    _1_failed_$sp[0] += -2;
    break;
    case _1_failed__local$result_STA_0$value_LIT_0: 
    (_1_failed_$pc[0]) ++;
    (_1_failed_$sp[0] + 1)->_void_star = (void *)(_1_failed_$locals + *((int *)_1_failed_$pc[0]));
    (_1_failed_$sp[0]) ++;
    _1_failed_$pc[0] += 4;
    break;
    }
  }
}
}
int main(int _formal_argc , char **_formal_argv , char **_formal_envp ) 
{ 
  int _BARRIER_0 ;
  char _1_main_$locals[32] ;
  union _1_main_$node _1_main_$stack[1][32] ;
  union _1_main_$node *_1_main_$sp[1] ;
  unsigned char *_1_main_$pc[1] ;

  {
  megaInit();
  _global_argc = _formal_argc;
  _global_argv = _formal_argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1_main_$sp[0] = _1_main_$stack[0];
  _1_main_$pc[0] = _1_main_$array[0];
  while (1) {
    switch (*(_1_main_$pc[0])) {
    case _1_main__return_int$expr_STA_0: 
    (_1_main_$pc[0]) ++;
    return ((_1_main_$sp[0] + 0)->_int);
    break;
    case _1_main__load_int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = *((int *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__goto$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    break;
    case _1_main__local$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$locals + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__store_int$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((int *)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_int;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__call$func_LIT_0: 
    (_1_main_$pc[0]) ++;
    switch (*((int *)_1_main_$pc[0])) {
    case 1: 
    *((int *)(_1_main_$locals + 28)) = checklicense();
    break;
    }
    _1_main_$pc[0] += 4;
    break;
    }
  }
}
}
void ACTIVATION_CODE_i$nit(void) 
{ 


  {
  ACTIVATION_CODE = 891022408U;
}
}
void renewlicense(void) 
{ 
  char _1_renewlicense_$locals[8] ;
  union _1_renewlicense_$node _1_renewlicense_$stack[1][32] ;
  union _1_renewlicense_$node *_1_renewlicense_$sp[1] ;
  unsigned char *_1_renewlicense_$pc[1] ;

  {
  _1_renewlicense_$sp[0] = _1_renewlicense_$stack[0];
  _1_renewlicense_$pc[0] = _1_renewlicense_$array[0];
  while (1) {
    switch (*(_1_renewlicense_$pc[0])) {
    case _1_renewlicense__local$result_STA_0$value_LIT_0: 
    (_1_renewlicense_$pc[0]) ++;
    (_1_renewlicense_$sp[0] + 1)->_void_star = (void *)(_1_renewlicense_$locals + *((int *)_1_renewlicense_$pc[0]));
    (_1_renewlicense_$sp[0]) ++;
    _1_renewlicense_$pc[0] += 4;
    break;
    case _1_renewlicense__store_void_star$left_STA_0$right_STA_1: 
    (_1_renewlicense_$pc[0]) ++;
    *((void **)(_1_renewlicense_$sp[0] + 0)->_void_star) = (_1_renewlicense_$sp[0] + -1)->_void_star;
    _1_renewlicense_$sp[0] += -2;
    break;
    case _1_renewlicense__string$result_STA_0$value_LIT_0: 
    (_1_renewlicense_$pc[0]) ++;
    (_1_renewlicense_$sp[0] + 1)->_void_star = (void *)(_1_renewlicense_$strings + *((int *)_1_renewlicense_$pc[0]));
    (_1_renewlicense_$sp[0]) ++;
    _1_renewlicense_$pc[0] += 4;
    break;
    case _1_renewlicense__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_renewlicense_$pc[0]) ++;
    (_1_renewlicense_$sp[0] + 0)->_void_star = (_1_renewlicense_$sp[0] + 0)->_void_star;
    break;
    case _1_renewlicense__call$func_LIT_0: 
    (_1_renewlicense_$pc[0]) ++;
    switch (*((int *)_1_renewlicense_$pc[0])) {
    case 1: 
    printf(*((char const   * __restrict  *)(_1_renewlicense_$locals + 0)));
    break;
    }
    _1_renewlicense_$pc[0] += 4;
    break;
    case _1_renewlicense__returnVoid$: 
    (_1_renewlicense_$pc[0]) ++;
    return;
    break;
    case _1_renewlicense__goto$label_LAB_0: 
    (_1_renewlicense_$pc[0]) ++;
    _1_renewlicense_$pc[0] += *((int *)_1_renewlicense_$pc[0]);
    break;
    }
  }
}
}
int checklicense(void) 
{ 
  char code[256] ;
  char _1_checklicense_$locals[368] ;
  union _1_checklicense_$node _1_checklicense_$stack[1][32] ;
  union _1_checklicense_$node *_1_checklicense_$sp[1] ;
  unsigned char *_1_checklicense_$pc[1] ;

  {
  _1_checklicense_$sp[0] = _1_checklicense_$stack[0];
  _1_checklicense_$pc[0] = _1_checklicense_$array[0];
  while (1) {
    switch (*(_1_checklicense_$pc[0])) {
    case _1_checklicense__return_int$expr_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    return ((_1_checklicense_$sp[0] + 0)->_int);
    break;
    case _1_checklicense__constant_void_star$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 1)->_void_star = *((void **)_1_checklicense_$pc[0]);
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 8;
    break;
    case _1_checklicense__global$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    switch (*((int *)_1_checklicense_$pc[0])) {
    case 1: 
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(& stdout);
    break;
    case 3: 
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(& ACTIVATION_CODE);
    break;
    case 2: 
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(& stdin);
    break;
    case 0: 
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(& EXPIRE_TIME);
    break;
    }
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 4;
    break;
    case _1_checklicense__goto$label_LAB_0: 
    (_1_checklicense_$pc[0]) ++;
    _1_checklicense_$pc[0] += *((int *)_1_checklicense_$pc[0]);
    break;
    case _1_checklicense__load_unsigned_int$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_unsigned_int = *((unsigned int *)(_1_checklicense_$sp[0] + 0)->_void_star);
    break;
    case _1_checklicense__constant_unsigned_long$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 1)->_unsigned_long = *((unsigned long *)_1_checklicense_$pc[0]);
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 8;
    break;
    case _1_checklicense__call$func_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    switch (*((int *)_1_checklicense_$pc[0])) {
    case 5: 
    printf(*((char const   * __restrict  *)(_1_checklicense_$locals + 56)));
    break;
    case 8: 
    renewlicense();
    break;
    case 1: 
    time(*((time_t **)(_1_checklicense_$locals + 0)));
    break;
    case 9: 
    failed();
    break;
    case 6: 
    fgets(*((char * __restrict  *)(_1_checklicense_$locals + 64)), (int )sizeof(code),
          *((FILE * __restrict  *)(_1_checklicense_$locals + 328)));
    break;
    case 7: 
    *((int *)(_1_checklicense_$locals + 348)) = atoi(*((char const   **)(_1_checklicense_$locals + 336)));
    break;
    case 10: 
    fflush(*((struct _IO_FILE **)(_1_checklicense_$locals + 360)));
    break;
    case 4: 
    fflush(*((struct _IO_FILE **)(_1_checklicense_$locals + 48)));
    break;
    case 3: 
    printf(*((char const   * __restrict  *)(_1_checklicense_$locals + 40)));
    break;
    case 2: 
    *((long *)(_1_checklicense_$locals + 32)) = mktime(*((struct tm **)(_1_checklicense_$locals + 16)));
    break;
    }
    _1_checklicense_$pc[0] += 4;
    break;
    case _1_checklicense__store_void_star$right_STA_0$left_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    *((void **)(_1_checklicense_$sp[0] + -1)->_void_star) = (_1_checklicense_$sp[0] + 0)->_void_star;
    _1_checklicense_$sp[0] += -2;
    break;
    case _1_checklicense__PlusPI_void_star_int2void_star$left_STA_0$result_STA_0$right_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + -1)->_void_star = (_1_checklicense_$sp[0] + 0)->_void_star + (_1_checklicense_$sp[0] + -1)->_int;
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__branchIfTrue$expr_STA_0$label_LAB_0: 
    (_1_checklicense_$pc[0]) ++;
    if ((_1_checklicense_$sp[0] + 0)->_int) {
      _1_checklicense_$pc[0] += *((int *)_1_checklicense_$pc[0]);
    } else {
      _1_checklicense_$pc[0] += 4;
    }
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__PlusPI_void_star_unsigned_long2void_star$left_STA_0$result_STA_0$right_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + -1)->_void_star = (_1_checklicense_$sp[0] + 0)->_void_star + (_1_checklicense_$sp[0] + -1)->_unsigned_long;
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__convert_int2unsigned_int$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_unsigned_int = (unsigned int )(_1_checklicense_$sp[0] + 0)->_int;
    break;
    case _1_checklicense__load_void_star$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_void_star = *((void **)(_1_checklicense_$sp[0] + 0)->_void_star);
    break;
    case _1_checklicense__store_int$right_STA_0$left_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    *((int *)(_1_checklicense_$sp[0] + -1)->_void_star) = (_1_checklicense_$sp[0] + 0)->_int;
    _1_checklicense_$sp[0] += -2;
    break;
    case _1_checklicense__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_void_star = (_1_checklicense_$sp[0] + 0)->_void_star;
    break;
    case _1_checklicense__store_long$right_STA_0$left_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    *((long *)(_1_checklicense_$sp[0] + -1)->_void_star) = (_1_checklicense_$sp[0] + 0)->_long;
    _1_checklicense_$sp[0] += -2;
    break;
    case _1_checklicense__string$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(_1_checklicense_$strings + *((int *)_1_checklicense_$pc[0]));
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 4;
    break;
    case _1_checklicense__local$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 1)->_void_star = (void *)(_1_checklicense_$locals + *((int *)_1_checklicense_$pc[0]));
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 4;
    break;
    case _1_checklicense__Eq_unsigned_int_unsigned_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + -1)->_int = (_1_checklicense_$sp[0] + 0)->_unsigned_int == (_1_checklicense_$sp[0] + -1)->_unsigned_int;
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__Gt_long_long2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + -1)->_int = (_1_checklicense_$sp[0] + -1)->_long > (_1_checklicense_$sp[0] + 0)->_long;
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__load_int$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_int = *((int *)(_1_checklicense_$sp[0] + 0)->_void_star);
    break;
    case _1_checklicense__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + -1)->_unsigned_long = (_1_checklicense_$sp[0] + 0)->_unsigned_long * (_1_checklicense_$sp[0] + -1)->_unsigned_long;
    (_1_checklicense_$sp[0]) --;
    break;
    case _1_checklicense__load_long$left_STA_0$result_STA_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 0)->_long = *((long *)(_1_checklicense_$sp[0] + 0)->_void_star);
    break;
    case _1_checklicense__constant_int$result_STA_0$value_LIT_0: 
    (_1_checklicense_$pc[0]) ++;
    (_1_checklicense_$sp[0] + 1)->_int = *((int *)_1_checklicense_$pc[0]);
    (_1_checklicense_$sp[0]) ++;
    _1_checklicense_$pc[0] += 4;
    break;
    }
  }
}
}
void megaInit(void) 
{ 


  {
  ACTIVATION_CODE_i$nit();
  EXPIRE_TIME_i$nit();
}
}
