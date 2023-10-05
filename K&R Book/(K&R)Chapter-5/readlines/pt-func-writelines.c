#include<stdio.h>


/*writelines: write output lines*/
void writelines(void *lineptr[], int nlines)
{
	int i;

	for(i = 0; i < nlines; i++)
		printf("%s\n",lineptr[i]);	//*(lineptr + i)
}

/*writelines(char lineprt[], int nlines)
{
	while(nlines-- > 0)
		printf("%s\n",*lineptr++);
}*/
