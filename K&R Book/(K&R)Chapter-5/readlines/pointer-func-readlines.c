#include<stdio.h>
#include<string.h>

#define MAXLEN 1000
#define BUFSIZE 1000

int get_line(char *line, int lim);
char *alloc(int);

/*read input lines*/
int readlines(void *lineptr[], int maxlines)
{
	int len,nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = get_line(line, MAXLEN)) > 0)
		if(nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len -1] = '\0';	//delete newline
			strcpy(p,line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

char allocbuf[BUFSIZE];
char *allocp = allocbuf;
/*alloc: allocate n size character array/block*/
char *alloc(int n)
{
	if((allocbuf + BUFSIZE - allocp) >= n) {
		allocp += n;
		return (allocp-n);
	}
	else
		return 0;
}

