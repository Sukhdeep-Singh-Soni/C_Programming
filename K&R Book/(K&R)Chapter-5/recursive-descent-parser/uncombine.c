#include<string.h>
#include<stdio.h>
#include<ctype.h>

#define MAXTOKEN 100
#define MAXBUF 100

enum {NAME, PARENS, BRACKETS};

int gettoken(void);
char out[1000];
char token[MAXTOKEN];
int tokentype;
int getch(void);
void ungetch(int);

/*convert word description to declarations*/
main()
{
	int type;
	char temp[MAXTOKEN];

	while(gettoken() != EOF) {
		strcpy(out,token);
		while((type = gettoken()) != '\n')
			if(type == PARENS || type == BRACKETS)
				strcat(out,token);
			else if(type == '*') {
				sprintf(temp, "(*%s)", out);
				strcpy(out,temp);
			} else if(type == NAME) {
				sprintf(temp, "%s %s",token,out);
				strcpy(out,temp);
			} else
				printf("invalid input at %s\n",token);
	}
	printf("%s\n",out);
	return 0;
}
int gettoken(void)	/*return next token*/
{
	int c, getch(void);
	void ungetch(int);
	char *p = token;

	while((c = getch()) == ' ' || c == '\t')
		;
	if(c == '(') {
		if((c = getch()) == ')') {
			strcpy(token,"()");
			return tokentype = PARENS;
		}
		else {
			ungetch(c);
			return tokentype = '(';
		} 
	} else if(c == '[') {
		for(*p++ = c; (*p++ = getch()) != ']';)
			;
		*p = '\0';
		return tokentype = BRACKETS;
	} else if(isalpha(c)) {
		for(*p++ = c; isalnum(c = getch()); )
			*p++ = c;
		*p = '\0';
		ungetch(c);
		return tokentype = NAME;
	} else
		return tokentype = c;

}


char buf[MAXBUF];	/*buffer to get and unget char to and from*/
char bufp = 0;
/*getch: get character from buffer*/
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/*ungetch: put a character to buffer*/
void ungetch(int n)
{
	if(bufp >= MAXBUF)
		printf("ungetch: too many arguments\n");
	else
		buf[bufp++] = n;
}
