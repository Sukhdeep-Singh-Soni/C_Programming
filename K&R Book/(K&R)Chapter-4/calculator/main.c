#include<stdio.h>
#include<stdlib.h>
#include "calc.h"
#define MAXOP 100
main()
{
	char s[MAXOP];
	double op2;
	int type;


	while((type = getopt(s)) != EOF)
	{
		switch(type)
		{
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
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error: unknownn input in %s",s);
				break;
		}
	}
	return 0;
}
