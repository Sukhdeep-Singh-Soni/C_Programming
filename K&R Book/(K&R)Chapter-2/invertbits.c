/*invert function that invert bits of x from position p of n-bits*/
#include<stdio.h>
unsigned invert(unsigned x,int p, int n);
main(){
	int x = 0x65;
	printf("%d\n",invert(x,4,3));
return 0;
}//end of main

/*invert function*/
unsigned invert(unsigned x, int p, int n){
	return (x >> (p+1-n)) ^ ~(~0 << n);
}
