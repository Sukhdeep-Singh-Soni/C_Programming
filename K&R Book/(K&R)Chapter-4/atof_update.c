#include<stdio.h>
#include<ctype.h>
main()
{
	char s[] = "5678.47e-6";
	double atof(char s[]);
	printf("%f",atof(s));
 return 0;
}

/*atof: convert string to double with scintific notation support*/
double atof(char s[])
{
   int i,sign,exp;
   double val,power;

   for(i = 0; isspace(s[i]); i++)	/*skip spaces*/
	;
   sign = (s[i] == '-') ? -1 : 1;
   if(s[i] == '+' || s[i] == '-')
	i++;
   for(val = 0.0; isdigit(s[i]); i++)
	val = 10.0 * val + (s[i] - '0');
   if(s[i] == '.')
	i++;
   for(power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
	power *= 10.0;
   }
   val = sign * val / power;
   if(s[i] == 'e' || s[i] == 'E')
   {
  	sign = (s[++i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		++i;
	for(exp = 0; isdigit(s[i]); i++)
	  exp = 10 * exp + (s[i] - '0');
	if(sign == 1)
		while(exp-- > 0)
			val *= 10;	/*positive component*/
	else
		while(exp-- > 0)
			val /= 10;	/*negative component*/
   }
   return val;
}
