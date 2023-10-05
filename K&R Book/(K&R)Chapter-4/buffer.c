#include<stdio.h>
/*assuming there is only one character to pushback in calculator
  program modifying getch and ungetch accordingly*/

int buf = 0;


/*getch: get a (possibly, pushed back) character*/
int getch()
{
	int c;
	if(buf != 0)
		c = buf;
	else
		c = getchar();
	buf = 0;
	return c;
}

/*ungetch: push character back onto the input*/
void ungetch(int c)
{
	if(buf != 0)
		printf("ungetch: too many argumants\n");
	else
		buf = c;
}
