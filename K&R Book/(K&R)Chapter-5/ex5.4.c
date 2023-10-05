#include<stdio.h>

int strend(char *, char *);

main()
{
	char s[] = "hello people";
	char t[] = "people";
	printf("%d\n",strend(s,t));
}

/*strend(s,t): return 1 if t occurns in s and 0 otherwise*/
int strend(char *s, char *t)
{
	char *bs = s;
	char *bt = t;

	for(; *s; s++)
		;
	for(; *t; t++)
		;
	for(; *s == *t; s--,t--)
		if(t == bt || s == bs)
			break;	/*at the beginning of the string*/
	if(*s == *t && t == bt && *s != '\0')
		return 1;
	else
		return 0; 
}
