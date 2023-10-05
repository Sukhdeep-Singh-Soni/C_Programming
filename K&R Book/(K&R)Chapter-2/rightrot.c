/*function rightrot to return the value of x rotated to right by n positions*/
#include<stdio.h>
unsigned rightrot(unsigned x, int n);
main(){
	unsigned x = 0x30;
	printf("%d",rightrot(x,3));
return 0;
}//end of main

/*rightrot function*/
unsigned rightrot(unsigned x, int n){
	return x >> n;
}
