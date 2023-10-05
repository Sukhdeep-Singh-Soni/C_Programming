#include<stdio.h>
#include<limits.h>
#include<float.h>
main(){
	/*signed numbers range*/
	printf("signed char 	%d - %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("signed int 	%d - %d\n",INT_MIN,INT_MAX);
	printf("signed short 	%d - %d\n",SHRT_MIN,SHRT_MAX);
	printf("signed long 	%ld - %ld\n",LONG_MIN,LONG_MAX);
	/*unsigned numbers range*/
	printf("unsigned char	%u - %u\n",0,UCHAR_MAX);
	printf("unsigned int 	%u - %u\n",0,UINT_MAX);
	printf("unsigned short 	%u - %u\n",0,USHRT_MAX);
	printf("unsigned long 	%lu - %lu\n",0,ULONG_MAX);

}//end of main
