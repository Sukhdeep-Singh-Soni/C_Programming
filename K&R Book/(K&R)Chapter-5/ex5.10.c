#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100


int getop(char []);
void ungets(char []);
void push(double);
double pop(void);
char buf[BUFSIZE];
int bufp = 0;
double val[MAXVAL];
int sp = 0;

/*reverse polish calculator, using command line*/
main(int argc, char *argv[])
{
	char s[MAXOP];
	double op2;

	while(--argc > 0) {
		ungets(" ");
		ungets(*++argv);
		switch(getop(s)) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			default:
					printf("error: unknown command %s\n",s);
					argc = 1;
					break;
		}
	}
	printf("\t%.8g\n",pop());
	return 0;
}


/*ungets: put string back onto the input*/
void ungets(char s[])
{
	int len = strlen(s);
	void ungetch(int);

	while(len > 0)
		ungetch(s[--len]);
}

/*ungetch: put character in buffer*/
void ungetch(int n)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many arguments\n");
	else
		buf[bufp++] = n;
}

/*getop: get the next operator or operand*/
int getop(char s[])
{
	int getch(void);
	void ungetch(int);
	int i,c;

	while((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	while(!isdigit(c) && c != '.')
		return c;
	i=0;
	while(isdigit(c))
		while(isdigit(s[++i] = c = getch()));
	if(c == '.')
		while(isdigit(s[++i] = c = getch()));
	s[i] = '\0';

	if(c != EOF)
		ungetch(c);
	return NUMBER;

}

/*getch: get a char from buffer or input*/
int getch()
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/*push: push a char in string*/
void push(double s)
{
	if(sp < MAXVAL)
		val[sp++] = s;
	else
		printf("error: stack full, can't push\n");
}

/*pop: pop en element form an array*/
double pop(void)
{
	if(sp > 0)
		return val[--sp];
	else
		printf("error: stack empty\n");
}
