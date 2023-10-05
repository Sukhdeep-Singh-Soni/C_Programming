/*bitcount with x & (x-1) 2nd Version*/
#include<stdio.h>
int bitcount(unsigned x);
main(){
	unsigned x=0x65;
	printf("%d",bitcount(x));
return 0;
}

/*bitcount updated version*/


int bitcount(unsigned x){
	int b;
	for(b = 0 ; x != 0 ; x &= (x-1))
		++b;
return b;
}//end of bitcount
