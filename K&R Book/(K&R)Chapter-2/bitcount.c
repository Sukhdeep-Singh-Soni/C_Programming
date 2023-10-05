/*count the no of 1-bit in x*/
#include<stdio.h>
int bitcount(unsigned x);
main(){
	unsigned x = 0x65;
	printf("%d\n",bitcount(x));
}//end of main

/*bitcount function*/
int bitcount(unsigned x){
	int b;
	for(b = 0; x != 0; x >>= 1)
		if(x & 0x01)
		++b;
	return b;
}
