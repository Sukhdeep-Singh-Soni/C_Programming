#include<stdio.h>
main()
{
/* this progranm will print celsuis values
	for the corrosponding fahrenheit values
	that take 20 step each like 0,20,40,...300 */
int fahr,cel;
int low,up,step;
low = 0;
up = 300;
step = 20;
fahr = low;
	while(fahr <= up)
	{
	    cel = 5 * (fahr - 32) / 9;
	    printf("%3d\t%6d\n",fahr,cel);
	    fahr = fahr + step;
	}
}
