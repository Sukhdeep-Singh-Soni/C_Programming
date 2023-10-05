#include<stdio.h>

void str_cat(char*,char*);

main()
{
	char s[10]="hello";
	char t[3] ="hi";
	str_cat(s,t);
	printf("%s\n",s);
}

/*strcat: copies string t to end of s*/
void str_cat(char *s, char *t)
{
	while(*s)
		s++;
	while(*s++ = *t++)
		;
}
/*while(*s)
	s++;
  while(*s++ = *t++)
	;*/
