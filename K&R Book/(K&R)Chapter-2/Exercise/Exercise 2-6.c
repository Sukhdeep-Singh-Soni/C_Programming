#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
main()
{
	unsigned x=1,y=5;
	int p=1,n=3;
	printf("%u\n",setbits(x,p,n,y));
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	return ((x & (~0 << n)) | (y & ~(~0 << n)));
}
