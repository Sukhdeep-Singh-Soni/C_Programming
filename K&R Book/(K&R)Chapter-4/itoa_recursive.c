#include<stdio.h>
/* #include<math.h> used for abs() function to make number
   negative to positive */
void itoa(int n, char s[])
{
	static int i;

	if(n / 10)
		itoa(n / 10,s);
	else
	{
		if(n < 0)
		{
		s[i++] = '-';
		n = -n;//omitted if used abs() function
		}
	}
	s[i++] = (n % 10) + '0';
	s[i] = '\0';
}

