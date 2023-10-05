#include<stdio.h>
#include<ctype.h>
#define SIZE 300

//int getfloat(float *pn);

main()
{
	int n,getfloat(float *);
	float array[SIZE];

	for(n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++)
		;

	printf("%f\n",  array[0]);
	printf("%f\n",  array[1]);

}

int getch(void);
void ungetch(int);

/*getint: get next integer from input into *pn*/
int getfloat(float *pn)
{
	int i,sign,c;
	float power;

	while(isspace(c = getch()))
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if(c == '+' || c == '-')
		c = getch();

	for(*pn = 0.0; isdigit(c); c = getch())
		*pn = 10.0 * *pn + (c - '0');	/*integer part*/
	if(c == '.')
		c = getch();

	for(power = 1.0; isdigit(c); c = getch()) /*fractional part*/
	{
		*pn = 10.0 * *pn + (c - '0');
		power *= 10.0;
	}

	*pn *= sign  / power;
	if(c != EOF)
		ungetch(c);
	return c;
}

#define BUFSIZE 300
int buf[BUFSIZE];
int bufp = 0;
/*getch: get a character from buffer or input*/
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/*ungetch: put a character in buffer*/
void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many argumants\n");
	else
		buf[bufp++] = c;
}
