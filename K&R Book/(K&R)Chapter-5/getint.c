#include<stdio.h>
#include<ctype.h>
#define SIZE 300

int getint(int *pn);

main()
{
	int n, array[SIZE], getint(int *);

	for(n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		;

	printf("%d\n",  array[0]);
	printf("%d\n",  array[1]);

}

int getch(void);
void ungetch(int);

/*getint: get next integer from input into *pn*/
int getint(int *pn)
{
	int i,sign,c;

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

	for(*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn = sign * *pn;
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
