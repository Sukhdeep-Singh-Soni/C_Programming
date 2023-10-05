#include<stdio.h>
#include "calculator/calc.h"	/*include file*/
#define forever for(;;)		/*infinite loop*/
#define max(A, B) ((A) < (B) ? (A) : (B)) /*macros with arguments*/
#undef forever
#define dprint(expr)  printf(#expr " = %g\n",expr)
#define paste(front, back)	front ## back
#if !defined(HDR)
#define SYSTEM MSDOS
#if SYSTEM == SYSV
	#define HDR "sysv.h"
#elif SYSTEM == BSD
	#define HDR "bsd.h"
#elif SYSTEM == MSDOS
	#define HDR "msdos.h"
#else
	#define HDR "default.h"
#endif
#include  HDR


#ifndef HRD
#define HRD
/* contents od hrd.h goes here*/
#endif


main()
{
int x=10,y=2;
dprint(x/y);
printf("\n");}
