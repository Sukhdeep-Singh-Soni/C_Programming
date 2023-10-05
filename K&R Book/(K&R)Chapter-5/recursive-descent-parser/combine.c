#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAXTOKEN  100
#define MAXBUF 100

enum { NAME, PARENS, BRACKETS};

void dcl(void);
void dirdcl(void);

int gettoken(void);
int tokentype;		/*type of last token*/
char token[MAXTOKEN];	/*last token string*/
char name[MAXTOKEN];	/*identifier name*/
char datatype[MAXTOKEN];	/*data type = char, int, etc.*/
char out[1000];

main() /* convert declarations to words */
{
	while(gettoken() != EOF) {	/*1st token on the*/
		strcpy(datatype,token);	/*line is the datatype*/
		out[0] = '\0';
		dcl();			/*parse rest of the line*/
		if(tokentype != '\n')
			printf("syntax error\n");
		printf("%s: %s %s\n", name, out , datatype);
	}
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



/*dirdcl: parse a direct declarator*/
void dirdcl(void)
{
	int type;

	if(tokentype == '(') {		/* (dcl)*/
		dcl();
		if(tokentype != ')')
			printf("error: missing )\n");
	} else if(tokentype == NAME) 	/*variable name*/
		strcpy(name,token);
	else
		printf("error: expected name or (dcl\n)");
	while((type = gettoken()) == PARENS || type == BRACKETS)
		if(type == PARENS)
			strcat(out," function returning");
		else {
			strcat(out," array");
			strcat(out,token);
			strcat(out," of");
		}
}

/*dcl: parse is declerator*/
void dcl(void)
{
	int ns;

	for(ns = 0; gettoken() == '*'; )	/*count *'s*/
		++ns;
	dirdcl();
	while(ns-- > 0)
		strcat(out, " pointer to");
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
