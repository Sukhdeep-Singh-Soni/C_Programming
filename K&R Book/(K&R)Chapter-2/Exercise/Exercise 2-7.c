#include<stdio.h>

unsigned invert(unsigned x, int p, int n);
main()
{
	unsigned x = 6;
	int p=2,n=2;
	printf("%u\n",invert(x,p,n));
}

unsigned invert(unsigned x, int p, int n) {
	return x ^ (~(~0 << n) << (p + 1 - n));
}
