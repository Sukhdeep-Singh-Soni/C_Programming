#include<stdio.h>
#include<ctype.h>
int atoi(char s[]);
main(){
    char s[] = "5643.677";
    printf("%d",atoi(s));
}//end of main


/*atof: convert string s to double*/
double atof(char s[])
{
   int i,sign;
   double val,power;

    for(i = 0; isspace(s[i]); i++)	/*skip spaces*/
	;
    sign = (s[i] == '-')? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
	++i;
    for(val = 0.0; isdigit(s[i]); i++)
	val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
	++i;
    for(power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
	power *= 10;
    }
    return sign * val / power;
}

/*atoi: convert string to int using atof*/
int atoi(char s[])
{
	double atof(char s[]);
	return (int)atof(s);
}
