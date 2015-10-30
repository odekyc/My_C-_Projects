// header file containing the macros 
#include<stdio.h>
//include the studio.h contents in this header file so that we can use the printf() function

#ifndef DEFS_H_
#define DEFS_H_
#endif DEFS_H
#ifndef PRINT1                                     //define PRINT1
#define PRINT1(X)  printf("%d\n", X)
#endif
#ifndef PRINT2
#define PRINT2(A,B) printf( "%d,%d\n", A,B)         //define PRINT2
#endif
#ifndef MAX2
#define MAX2(C,D) (C>D?C:D)                     //define MAX2
#endif
#ifndef MAX3
#define MAX3(MAX2,E) (MAX2 >E? MAX2 :E)        //define MAX3
#endif
