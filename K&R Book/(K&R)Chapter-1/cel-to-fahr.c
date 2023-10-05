#include<stdio.h>
main()
{
 /* celsuis to fahrenheit conversion */
 float fahr,cel,low,up,step;
 low = 0;
 up = 300;
 step = 20;
 cel = low;
 printf("Celsuis\t\tFahrenheit\n"); 
 while(cel <= up)
 {
    fahr = (9.0/5.0) * (cel + 32.0);
    printf("%4.0f\t\t%8.1f\n",cel,fahr);
    cel = cel + step;
 }
}
