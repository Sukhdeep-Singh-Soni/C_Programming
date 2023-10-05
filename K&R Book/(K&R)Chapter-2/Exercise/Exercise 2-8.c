#include<stdio.h>

unsigned rightrot(unsigned x, int n);
main() {
	unsigned x = 5;
	int n=3;
	printf("%u\n",rightrot(x,n));
}
unsigned rightrot(unsigned x, int n) {
	return x << n;
}
