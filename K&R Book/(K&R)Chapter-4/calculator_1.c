/*calculator.c modified with % and -ve numbers provisions*/
#include<stdio.h>
#include<stdlib.h>  /*for atof()*/
#define MAXOP 100   /*max size of operand and operator string*/
#define NUMBER '0'  /*signal that a number was found*/
#define NAME 'n'    /*signal that a name was found */

int getopt(char []);
void push(double);
double pop(void);
void mathfunc(char s[]);

/*reverse Polish calculator*/
main()
{
	int type,mod2,i,var = 0;
	double op1,op2,variable[26],v;
	char s[MAXOP];

	for(i = 0; i < 26; i++)
		variable[i] = 0.0;

	while ((type = getopt(s)) != EOF) {
		switch(type) {
			case NUMBER:
				push(atof(s));
				break;
			case NAME:
				mathfunc(s);
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
			case '%':
				mod2 = (int)pop();
				if(mod2 != 0) {
					push((int)pop() % mod2);
				}
				else
					printf("error: zero divisor\n");
				break;
			case '?':
				op2 = pop();
				printf("\t%.8g\n",op2);
				push(op2);
				break;
			case 'd':
				op2 = pop();
				push(op2);
				push(op2);
				break;
			case 's':
				op1 = pop();
				op2 = pop();
				push(op1);
				push(op2);
			case 'c':
				while(pop());//can also use clear();
				break;
			case '=':
				pop();
				if(var >= 'A' && var <= 'Z')
					variable[var - 'A'] = pop();
				else
					printf("error: not a variable name\n");
				break;
			case '\n':
				v = pop();
				printf("\t%.8g\n",v);
				break;
			default:
				if(type >= 'A' && type <= 'Z')
					push(variable[type - 'A']);
				else if (type == v)
					push(v);
				else
					printf("error: unknown command %s\n",s);
				break;
		}//end of switch of main
		var = type;
	}//end of while of main

	return 0;
}//end of main

#include<string.h>
#include<math.h>
/*mathfunc: check string s for supported math functions*/
void mathfunc(char s[])
{
	double op2;

	if (strcmp(s, "sin") == 0)
		push(sin(pop()));
	else if (strcmp(s, "cos") == 0)
		push(cos(pop()));
	else if (strcmp(s, "exp") == 0)
		push(exp(pop()));
	else if (strcmp(s, "pow") == 0)
	{
		op2 = pop();
		push(pow(pop(), op2));
	}
	else
		printf("error: %s not supported\n");
}

#define MAXVAL 100 /*maximum depth of val stack*/

int sp = 0;		/*next free stack position*/
double val[MAXVAL];	/*value stack*/

void push(double f)
{
	if(sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}//end of push

/*pop: pop and return top value from stack*/
double pop(void)
{
	if(sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}//end of pop

/*clear: clear the stack*/
void clear(void){sp=0;}

#include<ctype.h>

int getch(void);
void ungetch(int);

/*getopt: get next character or numeric operand*/
int getopt(char s[])
{
	int i,c;

	while((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	i=0;
	if(islower(c))		/*command or NAME*/
	{
		while(islower(s[++i] = c = getch()))
			;
		s[i] = '\0';
		if(c != EOF)
			ungetch(c);
		if(strlen(s) > 1)
			return NAME;	/*it is a NAME*/
		else
			return c;	/*may be a command*/
	}
	if(!isdigit(c) && c != '.' && c != '-')
		return c;		/*not a number*/

	if(c == '-')
		if(isdigit(c = getch()) || c == '.')
			s[++i] = c;
		else {
			if(c != EOF)
				ungetch(c);
			return '-';
		}

	if(isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if(c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}//end of getopt

#define BUFSIZE 100

char buf[BUFSIZE];	/*buffer size for ungetch*/
//can use int buf[BUFSIZE] for handling EOF correctly
int bufp = 0;		/*next free position in buf*/

int getch(void)		/*get a possibly pushed back character*/
{
	return (bufp >= 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp > BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

