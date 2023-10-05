#include<stdio.h>
main()
{
/* floating point version of fahrenheit to celsuis
   program */
 float fahr,cel;
 float low,up,step;
 low = 0;
 up = 300;
 step = 20;
 fahr = low;
 printf("Fahrenhiet\tCelsius\n");
 while(fahr <= up)
 {
    cel = (5.0/9.0) * (fahr - 32.0);
    printf("%6.0f\t\t%6.1f\n",fahr,cel);
    fahr = fahr + step;
 }
}
