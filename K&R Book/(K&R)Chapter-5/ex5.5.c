#include<stdio.h>

void str_n_cpy(char *, char *, int);
int str_n_cmp(char *, char *, int);
void str_n_cat(char *, char *, int);

main()
{
	char s[10]="bye";
	char t[5]="hello";
	printf("%d\n",str_n_cmp(s,t,3));
	//printf("%s",s);
}

/*str_n_cpy: copy n chars from string t to s*/
void str_n_cpy(char *s, char *t, int n)
{
	while(*t && n-- > 0)
		*s++ = *t++;
	while(n-- > 0)
		*s++ = '\0';
}

/*str_n_cmp: compare string s to t*/
int str_n_cmp(char *s, char *t, int n)
{
	for(; *s == *t; s++, t++)
		if(*s == '\0' || --n >= 0)
			return 0;
	return *s - *t;
}

/*str_n_cat: concat n char of t to end of s*/
void str_n_cat(char *s, char *t, int n)
{
	while(*s)
		s++;
	while(*t && n-- > 0)
		*s++ = *t++;
}
