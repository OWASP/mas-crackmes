//
// Created by Bernhard Mueller on 3/13/17.
//

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <unistd.h>
#include <jni.h>
#include <sys/ptrace.h>
#include <pthread.h>
#include <sys/wait.h>
#include <android/log.h>

#define APPNAME "UnCrackable3"
#define RAND_MAX 2147483647

static u_long myNextRandom = 1;



int rand(void)
{
    return (int)((myNextRandom = (1103515245 * myNextRandom) + 12345) % ((u_long)RAND_MAX + 1));
}


struct _1_sub_doit__opaque_Node_1;
struct __sFILE;
struct __sFILEX;
struct __sbuf;
struct timeval;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
int __attribute__((__visibility__("hidden")))  sub_21_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_21_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_21_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_21_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_18_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_21_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_18_3(void) ;
extern void exit(int status ) ;
int __attribute__((__visibility__("hidden")))  sub_14_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_14_3(void) ;
int _global_argc  =    0;
int __attribute__((__visibility__("hidden")))  sub_18_2(void) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
int __attribute__((__visibility__("hidden")))  sub_10_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_10_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_18_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_14_2(void) ;
struct _1_sub_doit__opaque_Node_1 {
    int data ;
    struct _1_sub_doit__opaque_Node_1 *next ;
};
struct _1_sub_doit__opaque_Node_1 *_1_sub_doit__opaque_list1_1  =    (struct _1_sub_doit__opaque_Node_1 *)0;
int __attribute__((__visibility__("hidden")))  sub_10_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_14_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_9_4(void) ;
extern long clock(void) ;
int __attribute__((__visibility__("hidden")))  sub_18_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_14_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_9_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_10_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_5_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_1_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_5_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_9_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_10_0(void) ;
extern void *malloc(unsigned long size ) ;
int __attribute__((__visibility__("hidden")))  sub_1_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_9_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_5_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_9_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_1_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_5_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_1_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_5_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_1_0(void) ;
typedef struct __sFILE FILE;
extern double sqrt(double x ) ;
extern void signal(int sig , void *func ) ;
char **_global_envp  =    (char **)0;
typedef struct _1_sub_doit__opaque_Node_1 *_1_sub_doit__opaque_List_1;
int __attribute__((__visibility__("hidden")))  sub_20_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_20_3(void) ;
__inline int ( __attribute__((__always_inline__)) __sputc)(int _c , FILE *_p ) ;
int __attribute__((__visibility__("hidden")))  sub_20_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_17_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_20_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_20_0(void) ;
extern int atoi(char const   *s ) ;
int __attribute__((__visibility__("hidden")))  sub_17_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_13_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_13_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_17_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_13_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_17_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_13_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_8_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_17_0(void) ;
extern int __swbuf(int  , FILE * ) ;
int __attribute__((__visibility__("hidden")))  sub_13_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_8_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_4_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_0_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_4_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_8_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_0_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_4_2(void) ;
extern int fcntl(int filedes , int cmd  , ...) ;
int __attribute__((__visibility__("hidden")))  sub_8_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_0_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_8_0(void) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
int __attribute__((__visibility__("hidden")))  sub_4_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_4_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_0_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_0_0(void) ;
extern int close(int filedes ) ;
extern long time(long *tloc ) ;
typedef __int64_t __darwin_off_t;
void __attribute__((__visibility__("hidden")))  sub_doit(char *out ) ;
int __attribute__((__visibility__("hidden")))  sub_23_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_23_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_23_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_23_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_16_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_23_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_16_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_12_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_12_3(void) ;
int main(int argc , char **argv , char **_formal_envp ) ;
int __attribute__((__visibility__("hidden")))  sub_16_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_12_2(void) ;
extern int getpagesize() ;
int __attribute__((__visibility__("hidden")))  sub_16_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_12_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_16_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_7_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_12_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_7_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_3_4(void) ;
extern void free(void *ptr ) ;
int __attribute__((__visibility__("hidden")))  sub_7_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_3_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_3_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_7_1(void) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int __attribute__((__visibility__("hidden")))  sub_3_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_7_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_3_0(void) ;
extern int raise(int sig ) ;
void megaInit(void) ;
extern int write(int filedes , void *buf , int nbyte ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
int __attribute__((__visibility__("hidden")))  sub_22_4(void) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
int __attribute__((__visibility__("hidden")))  sub_22_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_22_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_19_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_22_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_19_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_15_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_22_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_19_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_11_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_15_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_19_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_15_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_11_3(void) ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
int __attribute__((__visibility__("hidden")))  sub_19_0(void) ;
struct _1_sub_doit__opaque_Node_1 *_1_sub_doit__opaque_list2_1  =    (struct _1_sub_doit__opaque_Node_1 *)0;
int __attribute__((__visibility__("hidden")))  sub_11_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_15_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_15_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_6_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_11_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_2_4(void) ;
int __attribute__((__visibility__("hidden")))  sub_11_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_6_3(void) ;
extern void perror(char const   *str ) ;
int __attribute__((__visibility__("hidden")))  sub_2_3(void) ;
int __attribute__((__visibility__("hidden")))  sub_6_2(void) ;
int __attribute__((__visibility__("hidden")))  sub_2_2(void) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
int __attribute__((__visibility__("hidden")))  sub_6_1(void) ;
int __attribute__((__visibility__("hidden")))  sub_6_0(void) ;
int __attribute__((__visibility__("hidden")))  sub_2_1(void) ;
extern int open(char const   *filename , int oflag  , ...) ;
int __attribute__((__visibility__("hidden")))  sub_2_0(void) ;
char **_global_argv  =    (char **)0;
extern int scanf(char const   *format  , ...) ;
extern int fclose(void *stream ) ;
extern int fprintf(struct __sFILE *stream , char const   *format  , ...) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double difftime(long tv1 , long tv0 ) ;
int __attribute__((__visibility__("hidden")))  sub_6_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return ((int __attribute__((__visibility__("hidden")))  )172);
                } else {

                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_13_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_13_0();
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )34);
    }
}
int __attribute__((__visibility__("hidden")))  sub_3_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            tmp = sub_3_1();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )194);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_22_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    tmp = sub_22_0();
                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )213);
    }
}
int __attribute__((__visibility__("hidden")))  sub_1_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_1_3();
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )97);
                } else {

                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_2_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_2_0();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )51);
    }
}
int __attribute__((__visibility__("hidden")))  sub_17_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            tmp = sub_17_1();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )53);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_23_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            tmp = sub_23_0();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )136);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_3_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_3_0();
                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )4);
    }
}
int __attribute__((__visibility__("hidden")))  sub_12_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_12_2();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )179);
    }
}
int __attribute__((__visibility__("hidden")))  sub_11_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    tmp = sub_11_2();
                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )192);
    }
}
int __attribute__((__visibility__("hidden")))  sub_9_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return ((int __attribute__((__visibility__("hidden")))  )236);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_7_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    tmp = sub_7_2();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )175);
    }
}
int __attribute__((__visibility__("hidden")))  sub_16_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_16_3();
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )197);
                } else {

                }
            } else {

            }
        }
    }
}
__inline int ( __attribute__((__always_inline__)) __sputc)(int _c , FILE *_p )
{
    unsigned char *tmp ;
    unsigned char tmp___0 ;
    int tmp___1 ;

    {
//        (_p->_w) --;
//        if (_p->_w >= 0) {
//            tmp = _p->_p;
//            (_p->_p) ++;
//            tmp___0 = (unsigned char )_c;
//            *tmp = tmp___0;
//            return ((int )tmp___0);
//        } else
//        if (_p->_w >= _p->_lbfsize) {
//            if ((int )((char )_c) != 10) {
//                tmp = _p->_p;
//                (_p->_p) ++;
//                tmp___0 = (unsigned char )_c;
//                *tmp = tmp___0;
//                return ((int )tmp___0);
//            } else {
//                tmp___1 = __swbuf(_c, _p);
//                return (tmp___1);
//            }
//        } else {
            tmp___1 = __swbuf(_c, _p);
            return (tmp___1);
        }
//    }
}
int __attribute__((__visibility__("hidden")))  sub_22_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_22_1();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )133);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_16_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_16_2();
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )3);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_17_0(void)
{


    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )87);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_11_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    tmp = sub_11_0();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )102);
    }
}
int __attribute__((__visibility__("hidden")))  sub_7_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return ((int __attribute__((__visibility__("hidden")))  )86);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_15_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            tmp = sub_15_1();
        }
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )197);
            } else {

            }
        }
    }
}
int main(int argc , char **argv , char **_formal_envp )
{
    int _BARRIER_0 ;

    {
        megaInit();
        _global_argc = argc;
        _global_argv = argv;
        _global_envp = _formal_envp;
        _BARRIER_0 = 1;
        return (0);
    }
}
int __attribute__((__visibility__("hidden")))  sub_11_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_11_1();
                } else {

                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )12);
    }
}
void megaInit(void)
{


    {

    }
}
int __attribute__((__visibility__("hidden")))  sub_22_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_22_3();
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )70);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_19_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_19_3();
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )160);
    }
}
int __attribute__((__visibility__("hidden")))  sub_19_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_19_2();
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )42);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_21_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_21_2();
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )136);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_21_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_21_0();
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )18);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_1_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_1_0();
            }
        }
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )51);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_0_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_0_3();
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )180);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_21_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            tmp = sub_21_1();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )3);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_1_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return ((int __attribute__((__visibility__("hidden")))  )164);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_6_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_6_3();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )47);
    }
}
int __attribute__((__visibility__("hidden")))  sub_8_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            tmp = sub_8_1();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )103);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_3_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            tmp = sub_3_3();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )103);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_15_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )240);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_13_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_13_2();
            }
        }
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )205);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_0_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_0_1();
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )106);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_11_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return ((int __attribute__((__visibility__("hidden")))  )20);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_10_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return ((int __attribute__((__visibility__("hidden")))  )241);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_21_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_21_3();
            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )94);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_20_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return ((int __attribute__((__visibility__("hidden")))  )191);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_5_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_5_0();
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )255);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_15_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_15_2();
            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )123);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_10_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                tmp = sub_10_3();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )66);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_18_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_18_0();
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )6);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_23_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                return ((int __attribute__((__visibility__("hidden")))  )255);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_13_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return ((int __attribute__((__visibility__("hidden")))  )155);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_11_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_11_3();
                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )167);
    }
}
int __attribute__((__visibility__("hidden")))  sub_14_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_14_3();
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )209);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_4_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            tmp = sub_4_0();
        } else {

        }
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )1);
            }
        }
    }
}
void __attribute__((__visibility__("hidden")))  sub_doit(char *out )
{
    unsigned long tmp ;
    int __attribute__((__visibility__("hidden")))  tmp___0 ;
    int __attribute__((__visibility__("hidden")))  tmp___1 ;
    int __attribute__((__visibility__("hidden")))  tmp___2 ;
    int __attribute__((__visibility__("hidden")))  tmp___3 ;
    int __attribute__((__visibility__("hidden")))  tmp___4 ;
    int __attribute__((__visibility__("hidden")))  tmp___5 ;
    int __attribute__((__visibility__("hidden")))  tmp___6 ;
    int __attribute__((__visibility__("hidden")))  tmp___7 ;
    int __attribute__((__visibility__("hidden")))  tmp___8 ;
    int __attribute__((__visibility__("hidden")))  tmp___9 ;
    int __attribute__((__visibility__("hidden")))  tmp___10 ;
    int __attribute__((__visibility__("hidden")))  tmp___11 ;
    int __attribute__((__visibility__("hidden")))  tmp___12 ;
    int __attribute__((__visibility__("hidden")))  tmp___13 ;
    int __attribute__((__visibility__("hidden")))  tmp___14 ;
    int __attribute__((__visibility__("hidden")))  tmp___15 ;
    int __attribute__((__visibility__("hidden")))  tmp___16 ;
    int __attribute__((__visibility__("hidden")))  tmp___17 ;
    int __attribute__((__visibility__("hidden")))  tmp___18 ;
    int __attribute__((__visibility__("hidden")))  tmp___19 ;
    int __attribute__((__visibility__("hidden")))  tmp___20 ;
    int __attribute__((__visibility__("hidden")))  tmp___21 ;
    int __attribute__((__visibility__("hidden")))  tmp___22 ;
    int __attribute__((__visibility__("hidden")))  tmp___23 ;
    int r27 ;
    struct _1_sub_doit__opaque_Node_1 *p28 ;
    int r29 ;
    struct _1_sub_doit__opaque_Node_1 *p30 ;
    int r31 ;
    struct _1_sub_doit__opaque_Node_1 *p32 ;
    int r33 ;
    struct _1_sub_doit__opaque_Node_1 *p34 ;
    int r35 ;
    struct _1_sub_doit__opaque_Node_1 *p36 ;
    int r37 ;
    struct _1_sub_doit__opaque_Node_1 *p38 ;
    int r39 ;
    struct _1_sub_doit__opaque_Node_1 *p40 ;
    int r41 ;
    struct _1_sub_doit__opaque_Node_1 *p42 ;
    int r43 ;
    struct _1_sub_doit__opaque_Node_1 *p44 ;
    int r45 ;
    struct _1_sub_doit__opaque_Node_1 *p46 ;
    int r47 ;
    struct _1_sub_doit__opaque_Node_1 *p48 ;
    int r49 ;
    struct _1_sub_doit__opaque_Node_1 *p50 ;
    int r51 ;
    struct _1_sub_doit__opaque_Node_1 *p52 ;
    int r53 ;
    struct _1_sub_doit__opaque_Node_1 *p54 ;
    int r55 ;
    struct _1_sub_doit__opaque_Node_1 *p56 ;
    int r57 ;
    struct _1_sub_doit__opaque_Node_1 *p58 ;
    int r59 ;
    struct _1_sub_doit__opaque_Node_1 *p60 ;
    int r61 ;
    struct _1_sub_doit__opaque_Node_1 *p62 ;
    int r63 ;
    struct _1_sub_doit__opaque_Node_1 *p64 ;
    int r65 ;
    struct _1_sub_doit__opaque_Node_1 *p66 ;
    int r67 ;
    struct _1_sub_doit__opaque_Node_1 *p68 ;
    int r69 ;
    struct _1_sub_doit__opaque_Node_1 *p70 ;
    int r71 ;
    struct _1_sub_doit__opaque_Node_1 *p72 ;
    int r73 ;
    struct _1_sub_doit__opaque_Node_1 *p74 ;
    int r75 ;
    struct _1_sub_doit__opaque_Node_1 *p76 ;
    int r77 ;
    struct _1_sub_doit__opaque_Node_1 *p78 ;
    int r79 ;
    struct _1_sub_doit__opaque_Node_1 *p80 ;
    int r81 ;
    struct _1_sub_doit__opaque_Node_1 *p82 ;
    int r83 ;
    struct _1_sub_doit__opaque_Node_1 *p84 ;
    int r85 ;
    struct _1_sub_doit__opaque_Node_1 *p86 ;
    int r87 ;
    struct _1_sub_doit__opaque_Node_1 *p88 ;
    int r89 ;
    struct _1_sub_doit__opaque_Node_1 *p90 ;
    int r91 ;
    struct _1_sub_doit__opaque_Node_1 *p92 ;
    int r93 ;
    struct _1_sub_doit__opaque_Node_1 *p94 ;
    int r95 ;
    struct _1_sub_doit__opaque_Node_1 *p96 ;
    int r97 ;
    struct _1_sub_doit__opaque_Node_1 *p98 ;
    int r99 ;
    struct _1_sub_doit__opaque_Node_1 *p100 ;
    int r101 ;
    struct _1_sub_doit__opaque_Node_1 *p102 ;
    int r103 ;
    struct _1_sub_doit__opaque_Node_1 *p104 ;
    int r105 ;
    struct _1_sub_doit__opaque_Node_1 *p106 ;
    int r107 ;
    struct _1_sub_doit__opaque_Node_1 *p108 ;
    int r109 ;
    struct _1_sub_doit__opaque_Node_1 *p110 ;
    int r111 ;
    struct _1_sub_doit__opaque_Node_1 *p112 ;
    int r113 ;
    struct _1_sub_doit__opaque_Node_1 *p114 ;
    int r115 ;
    struct _1_sub_doit__opaque_Node_1 *p116 ;
    int r117 ;
    struct _1_sub_doit__opaque_Node_1 *p118 ;
    int r119 ;
    struct _1_sub_doit__opaque_Node_1 *p120 ;
    int r121 ;
    struct _1_sub_doit__opaque_Node_1 *p122 ;
    int r123 ;
    struct _1_sub_doit__opaque_Node_1 *p124 ;
    int r125 ;
    struct _1_sub_doit__opaque_Node_1 *p126 ;
    int r127 ;
    struct _1_sub_doit__opaque_Node_1 *p128 ;
    int r129 ;
    struct _1_sub_doit__opaque_Node_1 *p130 ;
    int r131 ;
    struct _1_sub_doit__opaque_Node_1 *p132 ;
    int r133 ;
    struct _1_sub_doit__opaque_Node_1 *p134 ;
    int r135 ;
    struct _1_sub_doit__opaque_Node_1 *p136 ;
    int r137 ;
    struct _1_sub_doit__opaque_Node_1 *p138 ;
    int r139 ;
    struct _1_sub_doit__opaque_Node_1 *p140 ;
    int r141 ;
    struct _1_sub_doit__opaque_Node_1 *p142 ;
    int r143 ;
    struct _1_sub_doit__opaque_Node_1 *p144 ;
    int r145 ;
    struct _1_sub_doit__opaque_Node_1 *p146 ;
    int r147 ;
    struct _1_sub_doit__opaque_Node_1 *p148 ;
    int r149 ;
    struct _1_sub_doit__opaque_Node_1 *p150 ;
    int r151 ;
    struct _1_sub_doit__opaque_Node_1 *p152 ;
    int r153 ;
    struct _1_sub_doit__opaque_Node_1 *p154 ;
    int r155 ;
    struct _1_sub_doit__opaque_Node_1 *p156 ;
    int r157 ;
    struct _1_sub_doit__opaque_Node_1 *p158 ;
    int r159 ;
    struct _1_sub_doit__opaque_Node_1 *p160 ;
    int r161 ;
    struct _1_sub_doit__opaque_Node_1 *p162 ;
    int r163 ;
    struct _1_sub_doit__opaque_Node_1 *p164 ;
    int r165 ;
    struct _1_sub_doit__opaque_Node_1 *p166 ;
    int r167 ;
    struct _1_sub_doit__opaque_Node_1 *p168 ;
    int r169 ;
    struct _1_sub_doit__opaque_Node_1 *p170 ;
    int r171 ;
    struct _1_sub_doit__opaque_Node_1 *p172 ;
    int r173 ;
    struct _1_sub_doit__opaque_Node_1 *p174 ;
    int r175 ;
    struct _1_sub_doit__opaque_Node_1 *p176 ;
    int r177 ;
    struct _1_sub_doit__opaque_Node_1 *p178 ;
    int r179 ;
    struct _1_sub_doit__opaque_Node_1 *p180 ;
    int r181 ;
    struct _1_sub_doit__opaque_Node_1 *p182 ;
    int r183 ;
    struct _1_sub_doit__opaque_Node_1 *p184 ;
    int r185 ;
    struct _1_sub_doit__opaque_Node_1 *p186 ;
    int r187 ;
    struct _1_sub_doit__opaque_Node_1 *p188 ;
    int r189 ;
    struct _1_sub_doit__opaque_Node_1 *p190 ;
    int r191 ;
    struct _1_sub_doit__opaque_Node_1 *p192 ;
    int r193 ;
    struct _1_sub_doit__opaque_Node_1 *p194 ;
    int r195 ;
    struct _1_sub_doit__opaque_Node_1 *p196 ;
    int r197 ;
    struct _1_sub_doit__opaque_Node_1 *p198 ;
    int r199 ;
    struct _1_sub_doit__opaque_Node_1 *p200 ;
    int r201 ;
    struct _1_sub_doit__opaque_Node_1 *p202 ;
    int r203 ;
    struct _1_sub_doit__opaque_Node_1 *p204 ;
    int r205 ;
    struct _1_sub_doit__opaque_Node_1 *p206 ;
    int r207 ;
    struct _1_sub_doit__opaque_Node_1 *p208 ;
    int r209 ;
    struct _1_sub_doit__opaque_Node_1 *p210 ;
    int r211 ;
    struct _1_sub_doit__opaque_Node_1 *p212 ;
    int r213 ;
    struct _1_sub_doit__opaque_Node_1 *p214 ;
    int r215 ;
    struct _1_sub_doit__opaque_Node_1 *p216 ;
    int r217 ;
    struct _1_sub_doit__opaque_Node_1 *p218 ;
    int r219 ;
    struct _1_sub_doit__opaque_Node_1 *p220 ;
    int r221 ;
    struct _1_sub_doit__opaque_Node_1 *p222 ;
    int r223 ;
    struct _1_sub_doit__opaque_Node_1 *p224 ;
    int r225 ;
    struct _1_sub_doit__opaque_Node_1 *p226 ;
    int _1_sub_doit__BEGIN_1 ;
    int _1_sub_doit__END_1 ;
    int _1_sub_doit__BARRIER_2 ;

    {
        {  /* __blockattribute__(__ATOMIC__)*/
            _1_sub_doit__BEGIN_1 = 1;
            r27 = rand();
            p28 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p28 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p28->data = r27;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p28->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p28;
                } else {
                    p28->next = p28;
                    _1_sub_doit__opaque_list1_1 = p28;
                }
            } else {

            }
            r29 = rand();
            p30 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p30 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p30->data = r29;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p30->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p30;
                } else {
                    p30->next = p30;
                    _1_sub_doit__opaque_list1_1 = p30;
                }
            } else {

            }
            r31 = rand();
            p32 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p32 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p32->data = r31;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p32->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p32;
                } else {
                    p32->next = p32;
                    _1_sub_doit__opaque_list1_1 = p32;
                }
            } else {

            }
            r33 = rand();
            p34 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p34 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p34->data = r33;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p34->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p34;
                } else {
                    p34->next = p34;
                    _1_sub_doit__opaque_list1_1 = p34;
                }
            } else {

            }
            r35 = rand();
            p36 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p36 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p36->data = r35;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p36->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p36;
                } else {
                    p36->next = p36;
                    _1_sub_doit__opaque_list1_1 = p36;
                }
            } else {

            }
            r37 = rand();
            p38 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p38 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p38->data = r37;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p38->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p38;
                } else {
                    p38->next = p38;
                    _1_sub_doit__opaque_list1_1 = p38;
                }
            } else {

            }
            r39 = rand();
            p40 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p40 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p40->data = r39;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p40->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p40;
                } else {
                    p40->next = p40;
                    _1_sub_doit__opaque_list1_1 = p40;
                }
            } else {

            }
            r41 = rand();
            p42 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p42 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p42->data = r41;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p42->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p42;
                } else {
                    p42->next = p42;
                    _1_sub_doit__opaque_list1_1 = p42;
                }
            } else {

            }
            r43 = rand();
            p44 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p44 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p44->data = r43;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p44->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p44;
                } else {
                    p44->next = p44;
                    _1_sub_doit__opaque_list1_1 = p44;
                }
            } else {

            }
            r45 = rand();
            p46 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p46 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p46->data = r45;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p46->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p46;
                } else {
                    p46->next = p46;
                    _1_sub_doit__opaque_list1_1 = p46;
                }
            } else {

            }
            r47 = rand();
            p48 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p48 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p48->data = r47;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p48->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p48;
                } else {
                    p48->next = p48;
                    _1_sub_doit__opaque_list1_1 = p48;
                }
            } else {

            }
            r49 = rand();
            p50 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p50 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p50->data = r49;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p50->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p50;
                } else {
                    p50->next = p50;
                    _1_sub_doit__opaque_list1_1 = p50;
                }
            } else {

            }
            r51 = rand();
            p52 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p52 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p52->data = r51;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p52->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p52;
                } else {
                    p52->next = p52;
                    _1_sub_doit__opaque_list1_1 = p52;
                }
            } else {

            }
            r53 = rand();
            p54 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p54 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p54->data = r53;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p54->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p54;
                } else {
                    p54->next = p54;
                    _1_sub_doit__opaque_list1_1 = p54;
                }
            } else {

            }
            r55 = rand();
            p56 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p56 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p56->data = r55;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p56->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p56;
                } else {
                    p56->next = p56;
                    _1_sub_doit__opaque_list1_1 = p56;
                }
            } else {

            }
            r57 = rand();
            p58 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p58 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p58->data = r57;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p58->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p58;
                } else {
                    p58->next = p58;
                    _1_sub_doit__opaque_list1_1 = p58;
                }
            } else {

            }
            r59 = rand();
            p60 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p60 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p60->data = r59;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p60->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p60;
                } else {
                    p60->next = p60;
                    _1_sub_doit__opaque_list1_1 = p60;
                }
            } else {

            }
            r61 = rand();
            p62 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p62 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p62->data = r61;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p62->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p62;
                } else {
                    p62->next = p62;
                    _1_sub_doit__opaque_list1_1 = p62;
                }
            } else {

            }
            r63 = rand();
            p64 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p64 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p64->data = r63;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p64->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p64;
                } else {
                    p64->next = p64;
                    _1_sub_doit__opaque_list1_1 = p64;
                }
            } else {

            }
            r65 = rand();
            p66 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p66 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p66->data = r65;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p66->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p66;
                } else {
                    p66->next = p66;
                    _1_sub_doit__opaque_list1_1 = p66;
                }
            } else {

            }
            r67 = rand();
            p68 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p68 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p68->data = r67;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p68->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p68;
                } else {
                    p68->next = p68;
                    _1_sub_doit__opaque_list1_1 = p68;
                }
            } else {

            }
            r69 = rand();
            p70 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p70 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p70->data = r69;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p70->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p70;
                } else {
                    p70->next = p70;
                    _1_sub_doit__opaque_list1_1 = p70;
                }
            } else {

            }
            r71 = rand();
            p72 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p72 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p72->data = r71;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p72->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p72;
                } else {
                    p72->next = p72;
                    _1_sub_doit__opaque_list1_1 = p72;
                }
            } else {

            }
            r73 = rand();
            p74 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p74 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p74->data = r73;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p74->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p74;
                } else {
                    p74->next = p74;
                    _1_sub_doit__opaque_list1_1 = p74;
                }
            } else {

            }
            r75 = rand();
            p76 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p76 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p76->data = r75;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p76->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p76;
                } else {
                    p76->next = p76;
                    _1_sub_doit__opaque_list1_1 = p76;
                }
            } else {

            }
            r77 = rand();
            p78 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p78 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p78->data = r77;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p78->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p78;
                } else {
                    p78->next = p78;
                    _1_sub_doit__opaque_list1_1 = p78;
                }
            } else {

            }
            r79 = rand();
            p80 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p80 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p80->data = r79;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p80->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p80;
                } else {
                    p80->next = p80;
                    _1_sub_doit__opaque_list1_1 = p80;
                }
            } else {

            }
            r81 = rand();
            p82 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p82 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p82->data = r81;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p82->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p82;
                } else {
                    p82->next = p82;
                    _1_sub_doit__opaque_list1_1 = p82;
                }
            } else {

            }
            r83 = rand();
            p84 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p84 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p84->data = r83;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p84->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p84;
                } else {
                    p84->next = p84;
                    _1_sub_doit__opaque_list1_1 = p84;
                }
            } else {

            }
            r85 = rand();
            p86 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p86 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p86->data = r85;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p86->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p86;
                } else {
                    p86->next = p86;
                    _1_sub_doit__opaque_list1_1 = p86;
                }
            } else {

            }
            r87 = rand();
            p88 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p88 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p88->data = r87;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p88->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p88;
                } else {
                    p88->next = p88;
                    _1_sub_doit__opaque_list1_1 = p88;
                }
            } else {

            }
            r89 = rand();
            p90 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p90 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p90->data = r89;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p90->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p90;
                } else {
                    p90->next = p90;
                    _1_sub_doit__opaque_list1_1 = p90;
                }
            } else {

            }
            r91 = rand();
            p92 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p92 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p92->data = r91;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p92->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p92;
                } else {
                    p92->next = p92;
                    _1_sub_doit__opaque_list1_1 = p92;
                }
            } else {

            }
            r93 = rand();
            p94 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p94 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p94->data = r93;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p94->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p94;
                } else {
                    p94->next = p94;
                    _1_sub_doit__opaque_list1_1 = p94;
                }
            } else {

            }
            r95 = rand();
            p96 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p96 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p96->data = r95;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p96->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p96;
                } else {
                    p96->next = p96;
                    _1_sub_doit__opaque_list1_1 = p96;
                }
            } else {

            }
            r97 = rand();
            p98 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p98 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p98->data = r97;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p98->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p98;
                } else {
                    p98->next = p98;
                    _1_sub_doit__opaque_list1_1 = p98;
                }
            } else {

            }
            r99 = rand();
            p100 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p100 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p100->data = r99;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p100->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p100;
                } else {
                    p100->next = p100;
                    _1_sub_doit__opaque_list1_1 = p100;
                }
            } else {

            }
            r101 = rand();
            p102 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p102 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p102->data = r101;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p102->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p102;
                } else {
                    p102->next = p102;
                    _1_sub_doit__opaque_list1_1 = p102;
                }
            } else {

            }
            r103 = rand();
            p104 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p104 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p104->data = r103;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p104->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p104;
                } else {
                    p104->next = p104;
                    _1_sub_doit__opaque_list1_1 = p104;
                }
            } else {

            }
            r105 = rand();
            p106 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p106 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p106->data = r105;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p106->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p106;
                } else {
                    p106->next = p106;
                    _1_sub_doit__opaque_list1_1 = p106;
                }
            } else {

            }
            r107 = rand();
            p108 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p108 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p108->data = r107;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p108->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p108;
                } else {
                    p108->next = p108;
                    _1_sub_doit__opaque_list1_1 = p108;
                }
            } else {

            }
            r109 = rand();
            p110 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p110 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p110->data = r109;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p110->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p110;
                } else {
                    p110->next = p110;
                    _1_sub_doit__opaque_list1_1 = p110;
                }
            } else {

            }
            r111 = rand();
            p112 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p112 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p112->data = r111;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p112->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p112;
                } else {
                    p112->next = p112;
                    _1_sub_doit__opaque_list1_1 = p112;
                }
            } else {

            }
            r113 = rand();
            p114 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p114 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p114->data = r113;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p114->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p114;
                } else {
                    p114->next = p114;
                    _1_sub_doit__opaque_list1_1 = p114;
                }
            } else {

            }
            r115 = rand();
            p116 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p116 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p116->data = r115;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p116->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p116;
                } else {
                    p116->next = p116;
                    _1_sub_doit__opaque_list1_1 = p116;
                }
            } else {

            }
            r117 = rand();
            p118 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p118 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p118->data = r117;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p118->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p118;
                } else {
                    p118->next = p118;
                    _1_sub_doit__opaque_list1_1 = p118;
                }
            } else {

            }
            r119 = rand();
            p120 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p120 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p120->data = r119;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p120->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p120;
                } else {
                    p120->next = p120;
                    _1_sub_doit__opaque_list1_1 = p120;
                }
            } else {

            }
            r121 = rand();
            p122 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p122 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p122->data = r121;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p122->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p122;
                } else {
                    p122->next = p122;
                    _1_sub_doit__opaque_list1_1 = p122;
                }
            } else {

            }
            r123 = rand();
            p124 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p124 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p124->data = r123;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p124->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p124;
                } else {
                    p124->next = p124;
                    _1_sub_doit__opaque_list1_1 = p124;
                }
            } else {

            }
            r125 = rand();
            p126 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p126 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p126->data = r125;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p126->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p126;
                } else {
                    p126->next = p126;
                    _1_sub_doit__opaque_list1_1 = p126;
                }
            } else {

            }
            r127 = rand();
            p128 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p128 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p128->data = r127;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p128->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p128;
                } else {
                    p128->next = p128;
                    _1_sub_doit__opaque_list1_1 = p128;
                }
            } else {

            }
            r129 = rand();
            p130 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p130 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p130->data = r129;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p130->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p130;
                } else {
                    p130->next = p130;
                    _1_sub_doit__opaque_list1_1 = p130;
                }
            } else {

            }
            r131 = rand();
            p132 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p132 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p132->data = r131;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p132->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p132;
                } else {
                    p132->next = p132;
                    _1_sub_doit__opaque_list1_1 = p132;
                }
            } else {

            }
            r133 = rand();
            p134 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p134 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p134->data = r133;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p134->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p134;
                } else {
                    p134->next = p134;
                    _1_sub_doit__opaque_list1_1 = p134;
                }
            } else {

            }
            r135 = rand();
            p136 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p136 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p136->data = r135;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p136->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p136;
                } else {
                    p136->next = p136;
                    _1_sub_doit__opaque_list1_1 = p136;
                }
            } else {

            }
            r137 = rand();
            p138 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p138 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p138->data = r137;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p138->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p138;
                } else {
                    p138->next = p138;
                    _1_sub_doit__opaque_list1_1 = p138;
                }
            } else {

            }
            r139 = rand();
            p140 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p140 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p140->data = r139;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p140->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p140;
                } else {
                    p140->next = p140;
                    _1_sub_doit__opaque_list1_1 = p140;
                }
            } else {

            }
            r141 = rand();
            p142 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p142 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p142->data = r141;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p142->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p142;
                } else {
                    p142->next = p142;
                    _1_sub_doit__opaque_list1_1 = p142;
                }
            } else {

            }
            r143 = rand();
            p144 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p144 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p144->data = r143;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p144->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p144;
                } else {
                    p144->next = p144;
                    _1_sub_doit__opaque_list1_1 = p144;
                }
            } else {

            }
            r145 = rand();
            p146 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p146 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p146->data = r145;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p146->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p146;
                } else {
                    p146->next = p146;
                    _1_sub_doit__opaque_list1_1 = p146;
                }
            } else {

            }
            r147 = rand();
            p148 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p148 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p148->data = r147;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p148->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p148;
                } else {
                    p148->next = p148;
                    _1_sub_doit__opaque_list1_1 = p148;
                }
            } else {

            }
            r149 = rand();
            p150 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p150 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p150->data = r149;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p150->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p150;
                } else {
                    p150->next = p150;
                    _1_sub_doit__opaque_list1_1 = p150;
                }
            } else {

            }
            r151 = rand();
            p152 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p152 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p152->data = r151;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p152->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p152;
                } else {
                    p152->next = p152;
                    _1_sub_doit__opaque_list1_1 = p152;
                }
            } else {

            }
            r153 = rand();
            p154 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p154 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p154->data = r153;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p154->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p154;
                } else {
                    p154->next = p154;
                    _1_sub_doit__opaque_list1_1 = p154;
                }
            } else {

            }
            r155 = rand();
            p156 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p156 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p156->data = r155;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p156->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p156;
                } else {
                    p156->next = p156;
                    _1_sub_doit__opaque_list1_1 = p156;
                }
            } else {

            }
            r157 = rand();
            p158 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p158 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p158->data = r157;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p158->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p158;
                } else {
                    p158->next = p158;
                    _1_sub_doit__opaque_list1_1 = p158;
                }
            } else {

            }
            r159 = rand();
            p160 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p160 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p160->data = r159;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p160->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p160;
                } else {
                    p160->next = p160;
                    _1_sub_doit__opaque_list1_1 = p160;
                }
            } else {

            }
            r161 = rand();
            p162 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p162 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p162->data = r161;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p162->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p162;
                } else {
                    p162->next = p162;
                    _1_sub_doit__opaque_list1_1 = p162;
                }
            } else {

            }
            r163 = rand();
            p164 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p164 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p164->data = r163;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p164->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p164;
                } else {
                    p164->next = p164;
                    _1_sub_doit__opaque_list1_1 = p164;
                }
            } else {

            }
            r165 = rand();
            p166 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p166 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p166->data = r165;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p166->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p166;
                } else {
                    p166->next = p166;
                    _1_sub_doit__opaque_list1_1 = p166;
                }
            } else {

            }
            r167 = rand();
            p168 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p168 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p168->data = r167;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p168->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p168;
                } else {
                    p168->next = p168;
                    _1_sub_doit__opaque_list1_1 = p168;
                }
            } else {

            }
            r169 = rand();
            p170 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p170 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p170->data = r169;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p170->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p170;
                } else {
                    p170->next = p170;
                    _1_sub_doit__opaque_list1_1 = p170;
                }
            } else {

            }
            r171 = rand();
            p172 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p172 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p172->data = r171;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p172->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p172;
                } else {
                    p172->next = p172;
                    _1_sub_doit__opaque_list1_1 = p172;
                }
            } else {

            }
            r173 = rand();
            p174 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p174 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p174->data = r173;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p174->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p174;
                } else {
                    p174->next = p174;
                    _1_sub_doit__opaque_list1_1 = p174;
                }
            } else {

            }
            r175 = rand();
            p176 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p176 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p176->data = r175;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p176->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p176;
                } else {
                    p176->next = p176;
                    _1_sub_doit__opaque_list1_1 = p176;
                }
            } else {

            }
            r177 = rand();
            p178 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p178 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p178->data = r177;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p178->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p178;
                } else {
                    p178->next = p178;
                    _1_sub_doit__opaque_list1_1 = p178;
                }
            } else {

            }
            r179 = rand();
            p180 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p180 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p180->data = r179;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p180->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p180;
                } else {
                    p180->next = p180;
                    _1_sub_doit__opaque_list1_1 = p180;
                }
            } else {

            }
            r181 = rand();
            p182 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p182 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p182->data = r181;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p182->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p182;
                } else {
                    p182->next = p182;
                    _1_sub_doit__opaque_list1_1 = p182;
                }
            } else {

            }
            r183 = rand();
            p184 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p184 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p184->data = r183;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p184->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p184;
                } else {
                    p184->next = p184;
                    _1_sub_doit__opaque_list1_1 = p184;
                }
            } else {

            }
            r185 = rand();
            p186 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p186 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p186->data = r185;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p186->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p186;
                } else {
                    p186->next = p186;
                    _1_sub_doit__opaque_list1_1 = p186;
                }
            } else {

            }
            r187 = rand();
            p188 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p188 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p188->data = r187;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p188->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p188;
                } else {
                    p188->next = p188;
                    _1_sub_doit__opaque_list1_1 = p188;
                }
            } else {

            }
            r189 = rand();
            p190 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p190 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p190->data = r189;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p190->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p190;
                } else {
                    p190->next = p190;
                    _1_sub_doit__opaque_list1_1 = p190;
                }
            } else {

            }
            r191 = rand();
            p192 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p192 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p192->data = r191;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p192->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p192;
                } else {
                    p192->next = p192;
                    _1_sub_doit__opaque_list1_1 = p192;
                }
            } else {

            }
            r193 = rand();
            p194 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p194 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p194->data = r193;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p194->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p194;
                } else {
                    p194->next = p194;
                    _1_sub_doit__opaque_list1_1 = p194;
                }
            } else {

            }
            r195 = rand();
            p196 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p196 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p196->data = r195;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p196->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p196;
                } else {
                    p196->next = p196;
                    _1_sub_doit__opaque_list1_1 = p196;
                }
            } else {

            }
            r197 = rand();
            p198 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p198 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p198->data = r197;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p198->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p198;
                } else {
                    p198->next = p198;
                    _1_sub_doit__opaque_list1_1 = p198;
                }
            } else {

            }
            r199 = rand();
            p200 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p200 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p200->data = r199;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p200->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p200;
                } else {
                    p200->next = p200;
                    _1_sub_doit__opaque_list1_1 = p200;
                }
            } else {

            }
            r201 = rand();
            p202 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p202 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p202->data = r201;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p202->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p202;
                } else {
                    p202->next = p202;
                    _1_sub_doit__opaque_list1_1 = p202;
                }
            } else {

            }
            r203 = rand();
            p204 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p204 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p204->data = r203;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p204->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p204;
                } else {
                    p204->next = p204;
                    _1_sub_doit__opaque_list1_1 = p204;
                }
            } else {

            }
            r205 = rand();
            p206 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p206 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p206->data = r205;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p206->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p206;
                } else {
                    p206->next = p206;
                    _1_sub_doit__opaque_list1_1 = p206;
                }
            } else {

            }
            r207 = rand();
            p208 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p208 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p208->data = r207;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p208->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p208;
                } else {
                    p208->next = p208;
                    _1_sub_doit__opaque_list1_1 = p208;
                }
            } else {

            }
            r209 = rand();
            p210 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p210 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p210->data = r209;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p210->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p210;
                } else {
                    p210->next = p210;
                    _1_sub_doit__opaque_list1_1 = p210;
                }
            } else {

            }
            r211 = rand();
            p212 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p212 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p212->data = r211;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p212->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p212;
                } else {
                    p212->next = p212;
                    _1_sub_doit__opaque_list1_1 = p212;
                }
            } else {

            }
            r213 = rand();
            p214 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p214 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p214->data = r213;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p214->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p214;
                } else {
                    p214->next = p214;
                    _1_sub_doit__opaque_list1_1 = p214;
                }
            } else {

            }
            r215 = rand();
            p216 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p216 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p216->data = r215;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p216->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p216;
                } else {
                    p216->next = p216;
                    _1_sub_doit__opaque_list1_1 = p216;
                }
            } else {

            }
            r217 = rand();
            p218 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p218 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p218->data = r217;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p218->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p218;
                } else {
                    p218->next = p218;
                    _1_sub_doit__opaque_list1_1 = p218;
                }
            } else {

            }
            r219 = rand();
            p220 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p220 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p220->data = r219;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p220->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p220;
                } else {
                    p220->next = p220;
                    _1_sub_doit__opaque_list1_1 = p220;
                }
            } else {

            }
            r221 = rand();
            p222 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p222 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p222->data = r221;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p222->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p222;
                } else {
                    p222->next = p222;
                    _1_sub_doit__opaque_list1_1 = p222;
                }
            } else {

            }
            r223 = rand();
            p224 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p224 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p224->data = r223;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p224->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p224;
                } else {
                    p224->next = p224;
                    _1_sub_doit__opaque_list1_1 = p224;
                }
            } else {

            }
            r225 = rand();
            p226 = (struct _1_sub_doit__opaque_Node_1 *)malloc(sizeof(struct _1_sub_doit__opaque_Node_1 ));
            if (p226 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                p226->data = r225;
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    p226->next = _1_sub_doit__opaque_list1_1->next;
                    _1_sub_doit__opaque_list1_1->next = p226;
                } else {
                    p226->next = p226;
                    _1_sub_doit__opaque_list1_1 = p226;
                }
            } else {

            }
            _1_sub_doit__opaque_list2_1 = _1_sub_doit__opaque_list1_1;
            _1_sub_doit__END_1 = 1;
        }
        _1_sub_doit__BARRIER_2 = 1;

        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = __builtin_object_size((void *)out, 0);
            __builtin___memset_chk((void *)out, 0, 25UL, tmp);
            tmp___0 = sub_0_4();
            *(out + 0) = (char )tmp___0;
            tmp___1 = sub_1_4();
            *(out + 1) = (char )tmp___1;
            tmp___2 = sub_2_4();
            *(out + 2) = (char )tmp___2;
            tmp___3 = sub_3_4();
            *(out + 3) = (char )tmp___3;
            tmp___4 = sub_4_4();
            *(out + 4) = (char )tmp___4;
            tmp___5 = sub_5_4();
            *(out + 5) = (char )tmp___5;
            tmp___6 = sub_6_4();
            *(out + 6) = (char )tmp___6;
            tmp___7 = sub_7_4();
            *(out + 7) = (char )tmp___7;
            tmp___8 = sub_8_4();
            *(out + 8) = (char )tmp___8;
            tmp___9 = sub_9_4();
            *(out + 9) = (char )tmp___9;
            tmp___10 = sub_10_4();
            *(out + 10) = (char )tmp___10;
            tmp___11 = sub_11_4();
            *(out + 11) = (char )tmp___11;
            tmp___12 = sub_12_4();
            *(out + 12) = (char )tmp___12;
            tmp___13 = sub_13_4();
            *(out + 13) = (char )tmp___13;
            tmp___14 = sub_14_4();
            *(out + 14) = (char )tmp___14;
            tmp___15 = sub_15_4();
            *(out + 15) = (char )tmp___15;
            tmp___16 = sub_16_4();
            *(out + 16) = (char )tmp___16;
            tmp___17 = sub_17_4();
            *(out + 17) = (char )tmp___17;
            tmp___18 = sub_18_4();
            *(out + 18) = (char )tmp___18;
            tmp___19 = sub_19_4();
            *(out + 19) = (char )tmp___19;
            tmp___20 = sub_20_4();
            *(out + 20) = (char )tmp___20;
            tmp___21 = sub_21_4();
            *(out + 21) = (char )tmp___21;
            tmp___22 = sub_22_4();
            *(out + 22) = (char )tmp___22;
            tmp___23 = sub_23_4();
            *(out + 23) = (char )tmp___23;
        }
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return;
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_6_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_6_2();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )81);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_10_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_10_1();
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )201);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_8_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_8_0();
        }
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )112);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_6_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_6_0();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )217);
    }
}
int __attribute__((__visibility__("hidden")))  sub_20_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_20_0();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )98);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_18_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_18_3();
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )40);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_8_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_8_3();
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )183);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_12_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_12_3();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )220);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_9_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_9_1();
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )193);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_23_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_23_1();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )60);
    }
}
int __attribute__((__visibility__("hidden")))  sub_3_0(void)
{


    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )208);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_20_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_20_2();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )209);
    }
}
int __attribute__((__visibility__("hidden")))  sub_9_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_9_0();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )174);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_15_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_15_3();
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )38);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_14_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_14_1();
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )64);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_19_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_19_1();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )151);
    }
}
int __attribute__((__visibility__("hidden")))  sub_2_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_2_3();
                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )231);
    }
}
int __attribute__((__visibility__("hidden")))  sub_17_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_17_3();
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )220);
    }
}
int __attribute__((__visibility__("hidden")))  sub_20_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                tmp = sub_20_3();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )133);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_12_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                tmp = sub_12_1();
            }
        }
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )83);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_2_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_2_1();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )64);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_8_0(void)
{


    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )216);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_14_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_14_2();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )153);
    }
}
int __attribute__((__visibility__("hidden")))  sub_9_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_9_3();
                } else {

                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )134);
    }
}
int __attribute__((__visibility__("hidden")))  sub_0_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_0_0();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )192);
    }
}
int __attribute__((__visibility__("hidden")))  sub_5_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_5_2();
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )147);
                } else {

                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_19_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return ((int __attribute__((__visibility__("hidden")))  )116);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_0_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                tmp = sub_0_2();
            }
        }
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )228);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_12_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_12_0();
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )197);
                } else {

                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_4_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_4_2();
                } else {

                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )110);
    }
}
int __attribute__((__visibility__("hidden")))  sub_1_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    tmp = sub_1_2();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )148);
    }
}
int __attribute__((__visibility__("hidden")))  sub_14_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_14_0();
                } else {

                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )124);
    }
}
int __attribute__((__visibility__("hidden")))  sub_16_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_16_1();
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )35);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_16_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return ((int __attribute__((__visibility__("hidden")))  )17);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_7_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_7_3();
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )201);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_19_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_19_0();
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )105);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_23_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_23_2();
                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )168);
    }
}
int __attribute__((__visibility__("hidden")))  sub_2_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )109);
                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_16_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_16_0();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )252);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_8_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_8_2();
            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )117);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_22_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_22_2();
        }
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )241);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_5_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return ((int __attribute__((__visibility__("hidden")))  )172);
                } else {

                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_15_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    tmp = sub_15_0();
                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )125);
    }
}
int __attribute__((__visibility__("hidden")))  sub_18_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_18_1();
        {
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )116);
                } else {

                }
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_10_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_10_2();
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )99);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_7_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_7_1();
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )55);
                } else {

                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_5_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            tmp = sub_5_1();
        }
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )40);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_14_0(void)
{


    {
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )103);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_4_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_4_1();
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )5);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_9_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                tmp = sub_9_2();
            }
        }
        if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )5);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_5_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                tmp = sub_5_3();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )255);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_1_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_1_1();
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )106);
    }
}
int __attribute__((__visibility__("hidden")))  sub_13_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_13_3();
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )83);
    }
}
int __attribute__((__visibility__("hidden")))  sub_4_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return ((int __attribute__((__visibility__("hidden")))  )166);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_4_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_4_3();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )195);
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_7_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_7_0();
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )18);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_18_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return ((int __attribute__((__visibility__("hidden")))  )220);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_23_4(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_23_3();
                } else {

                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )247);
    }
}
int __attribute__((__visibility__("hidden")))  sub_3_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
                    tmp = sub_3_2();
                } else {

                }
            } else {

            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )98);
    }
}
int __attribute__((__visibility__("hidden")))  sub_22_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )244);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_0_0(void)
{


    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else
            if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                return ((int __attribute__((__visibility__("hidden")))  )231);
            } else {

            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_21_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )207);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_17_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        tmp = sub_17_2();
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return (tmp ^ (int __attribute__((__visibility__("hidden")))  )114);
                }
            }
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_12_0(void)
{


    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

                } else {
                    return ((int __attribute__((__visibility__("hidden")))  )163);
                }
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_10_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            tmp = sub_10_0();
        }
        {
            if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )26);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_13_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 != _1_sub_doit__opaque_list2_1) {

        } else {
            tmp = sub_13_1();
        }
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                return (tmp ^ (int __attribute__((__visibility__("hidden")))  )58);
            }
        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_17_1(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_17_0();
            }
        }
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )194);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_2_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_2_2();
                } else {

                }
            }
        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )232);
    }
}
int __attribute__((__visibility__("hidden")))  sub_18_3(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                tmp = sub_18_2();
            } else {

            }
        }
        if (_1_sub_doit__opaque_list1_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )220);
        } else {

        }
    }
}
int __attribute__((__visibility__("hidden")))  sub_6_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        if (_1_sub_doit__opaque_list1_1 == _1_sub_doit__opaque_list2_1) {
            {
                if (_1_sub_doit__opaque_list2_1 != (struct _1_sub_doit__opaque_Node_1 *)0UL) {
                    tmp = sub_6_1();
                } else {

                }
            }
        } else {

        }
        return (tmp ^ (int __attribute__((__visibility__("hidden")))  )66);
    }
}
int __attribute__((__visibility__("hidden")))  sub_20_2(void)
{
    int __attribute__((__visibility__("hidden")))  tmp ;

    {
        {
            if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

            } else {
                tmp = sub_20_1();
            }
        }
        if (_1_sub_doit__opaque_list2_1 == (struct _1_sub_doit__opaque_Node_1 *)0UL) {

        } else {
            return (tmp ^ (int __attribute__((__visibility__("hidden")))  )158);
        }
    }
}


static char out[25];
static char x[25];
static int initialized = 0;

static int child_pid;

void goodbye() {
    raise(SIGABRT);
    _exit(0);
}

int  __attribute__ ((visibility ("hidden"))) strncmp_with_xor(char *src1, char *src2, char *key)
{
    // __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Entering strncmp_with_xor");

    int i = 0;

    while (i < 24)
    {
        // __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Strcmp: %c, %c", src1[i],(src2[i] ^ key[i]));

        if(src1[i] > (src2[i] ^ key[i]))
            return 1;
        if(src1[i] < (src2[i] ^ key[i]))
            return 1;

        i++;
    }

    // __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "strncmp_with_xor returns %d", i);

    return i;
}

void  __attribute__ ((visibility ("hidden"))) *__somonitor_loop(void *) {

    char line[512];

    FILE* fp;

    while (1) {
        fp = fopen("/proc/self/maps", "r");

        if (fp)
        {

            while (fgets(line, 512, fp))
            {
                if (strstr(line, "frida") || strstr(line, "xposed")) {

                    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Tampering detected! Terminating...");

                    goodbye();

                }

            }
            fclose(fp);
        } else {
            __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Error opening /proc/self/maps! Terminating...");

            goodbye();
        }

        usleep(500);
    }

}


__attribute__((constructor)) static void _start(void) {
    pthread_t t;

    pthread_create( &t, NULL, __somonitor_loop, NULL );

    memset(x, 0, 25);

    initialized += 1;

    return;
}


void  __attribute__ ((visibility ("hidden"))) *monitor_pid(void *) {
    //only works when target-sDK below 28, now removed
//    int status;
//
//    waitpid(child_pid, &status, 0);
//
//    if (status != 11) {
//
//        // If this is a release build, the child will segfault (status 11). Otherwise, waitpid() should never return.
//
//        goodbye(); // Commit seppuku
//    }

    pthread_exit(NULL);

}

void  __attribute__ ((visibility ("hidden"))) anti_debug() {

    child_pid = fork();

    if (child_pid == 0)
    {
        int ppid = getppid();

        int status;

        if (ptrace(PTRACE_ATTACH, ppid, NULL, NULL) == 0)
        {
            waitpid(ppid, &status, 0);

            ptrace(PTRACE_CONT, ppid, NULL, NULL);

            while (waitpid(ppid, &status, 0)) {

                if (WIFSTOPPED(status)) {
                    // If parent stops, tell it to resume.
                    ptrace(PTRACE_CONT, ppid, NULL, NULL);
                } else {
                    // Parent has exited for some reason.
                    _exit(0);
                }
            }
        }

    } else {
        pthread_t t;

        // Start the monitoring thread

        pthread_create(&t, NULL, monitor_pid, (void *)NULL);
    }
}



extern "C"
JNIEXPORT void JNICALL Java_sg_vantagepoint_uncrackable3_MainActivity_init(JNIEnv *env, jobject, jbyteArray xk) {

    anti_debug();

    jbyte* temp = env->GetByteArrayElements(xk, NULL);

    strncpy(x, (char*)temp, 24);

    env->ReleaseByteArrayElements(xk, temp, JNI_ABORT);

    initialized += 1;
}


extern "C"
JNIEXPORT jlong JNICALL Java_sg_vantagepoint_uncrackable3_MainActivity_baz(JNIEnv *env, jobject) {

    return 1999877287;
}

extern "C"
JNIEXPORT jboolean JNICALL Java_sg_vantagepoint_uncrackable3_CodeCheck_bar(JNIEnv *env, jobject, jbyteArray in) {

    jbyte out[25];


    memset(out, 0, 25);

    if (initialized == 2) {

        sub_doit((char*)out);

        jbyte *buffer = env->GetByteArrayElements(in, NULL);
        jsize size = env->GetArrayLength(in);

        // __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Bytearray in: %s", buffer);

        if (size == 24) {
            if (strncmp_with_xor((char*)buffer, (char*)out, x) == 24) {
                return true;
            }
        }
    }

    return false;
}
