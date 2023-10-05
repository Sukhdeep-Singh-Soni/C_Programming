//#include<string.h>
#define BUFSIZE 1000
#define MAXLEN 1000
#define NULL 0
#define MAXSTORE 5000

int get_line(char *line, int lim);
char *alloc(int);
void str_cpy(char *,char *);

/*read input lines*/
int readlines(char *lineptr[], char *linestore, int maxlines) //char **lineptr = *lineptr[]
{
	int len,nlines;
	char *p, line[MAXLEN];
	p = linestore;
	char *linestop = linestore + MAXSTORE;
	nlines = 0;
	while((len = get_line(line, MAXLEN)) > 0)
		if(nlines >= maxlines || p+len > linestop)
			return -1;
		else {
			line[len -1] = '\0';	//delete newline
			str_cpy(p,line);
			lineptr[nlines++] = p;
			p += len;
		}
	return nlines;
}

/*char allocbuf[BUFSIZE];
char *allocp = allocbuf;

/*alloc: allocate n size character array/block
char *alloc(int n)
{
	if(allocbuf + BUFSIZE - allocp >= n) {
		allocp += n;
		return allocp-n;
	}
	else
		return 0;
}
*/
/*strcpy: copy string line to p*/
void str_cpy(char *p, char *line)
{
	//int i;

	while(*p++ = *line++)
		;
}

