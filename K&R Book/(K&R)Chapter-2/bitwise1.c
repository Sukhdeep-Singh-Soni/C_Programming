/*getbits program to get the n-bit field[means no. of bits] from a number x at position p
		assuming that position starts with 0 on right end and p and n are positive nos*/
#include<stdio.h>
unsigned getbits(unsigned x,int p,int n);
main(){
	unsigned x=0x65;
	printf("%d",getbits(x,4,3));
}//end of main

unsigned getbits(unsigned x, int p, int n){
	return (x >> (p+1-n) & ~(~0 << n));
}//end of getbits
/*if assume position start with 0 result will be 1
  if assume position start with 1 result will be 2*/
