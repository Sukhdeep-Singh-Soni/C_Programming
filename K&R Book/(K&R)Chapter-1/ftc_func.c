#include<stdio.h>
#define LOW 0
#define UPPER 300
#define STEP 20
// rewrite of fahrenheit to celsius program with the use of functions
float convert_to_celsius(float temp);
main() {
 float fahr;
 fahr = LOW;
 while(fahr <= UPPER) {
   printf("%3.0f\t%6.1f\n",fahr,convert_to_celsius(fahr));
   fahr = fahr + STEP;
  }//end of while
}//end of main

float convert_to_celsius(float fahr) {
  float celsius = (5.0/9.0) * (fahr - 32.0);
  return celsius;
}//end of convert function
