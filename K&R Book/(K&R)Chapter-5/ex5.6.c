#include<stdio.h>
#include<string.h>

int get_line(char *);
int atoi(char *);
void itoa(int, char *);
int strindex(char *, char *);
main()
{
	char s[]="hello people";
	char t[] = "peo";
	//int n = 5678;
	//printf("%d\n",get_line(s));
	//printf("%d\n",atoi(s));
	//printf("%s",s);
	//itoa(n,s);
	printf("%d\n",strindex(s,t));
}

/*get_line: get each line and return int as string length*/
int get_line(char *s)
{
	int c,i;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		*s++ = c;
	if(c == '\n') {
		*s++ = c;
		i++;
	}
	*s = '\0';
	return i;
}

/*atoi: convert ascii to int*/
int atoi(char *s)
{
	int i,n;
	for(n = 0; *s >= '0' && *s <= '9'; i++,s++)
		n = n * 10 + (*s - '0');
	return n;
}

/*itoa: convert int to ascii*/
void itoa(int n,char *s)
{
	void reverse(char *);
	int sign;
	char *t = s;
	if((sign = n) < 0)
		n = -n;
	do {
		*s++ = n % 10 + '0';
	}while((n /= 10) > 0);
	if(sign < 0)
		*s++ = '-';
	*s = '\0';
	reverse(t);

}

//reverse: reverse a string s
void reverse(char *s)
{
	int c;
	char *t;


	for(t = s + (strlen(s) - 1); s < t; s++,t--) {
		c = *s;
		*s = *t;
		*t = c;
	}
}

/*strindex: return index of t in s, -1 if none*/
int strindex(char *s, char *t)
{
	char *bs = s;
	char *p,*r;

	for(; *s != '\0'; s++) {
	  for(p=s,r=t; *r != '\0' && *p == *r; p++,r++)
		;
	    if(r > t && *r == '\0')
		return s - bs;
	}
	return -1;
}
