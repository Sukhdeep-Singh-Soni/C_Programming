/*set n bits of x at position p with the bits f y*/
#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y);
main(){
	unsigned x=0x65,y=0x32;
	printf("%d",setbits(x,4,3,y));
return 0;
}//end of main

/*set bits function*/
unsigned setbits(unsigned x,int p,int n,unsigned y){
	return ((x >> (p+1-n)) & (~0 << n)) | (y & ~(~0 << n));
}//end of setbits func
