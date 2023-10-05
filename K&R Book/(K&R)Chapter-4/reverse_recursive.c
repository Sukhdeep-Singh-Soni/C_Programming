#include<string.h>
/*reverse_rec: reverse string s ,recursive*/
void reverse_rec(char s[],int i,int len)	/*len obtained from strlen() function from string.h header file*/
{
	int c,j;
	j = len - (i + 1);

	if(i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		reverse_rec(s, ++i, len);
	}
}
