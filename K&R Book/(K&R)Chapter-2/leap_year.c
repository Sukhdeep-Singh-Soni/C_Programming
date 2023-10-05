/*check whether the year the leap year*/
#include<stdio.h>
main(){
 int i=2000;
	if((i%4 == 0 && i%100 != 0) || i%400 == 0)
		printf("%d is a leap year\n",i);
	else
		printf("%d is not a leap year\n",i);
return 0;
}
