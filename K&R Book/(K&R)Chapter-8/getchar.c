#include "syscalls.h"
#include<stdio.h>
#undef getchar
//or
//#define EOF (-1)
main()
{
	int c, n = 5,getchar(void);
	int getchar_buffered(void);
	while((c = getchar_buffered()) != EOF)
	printf("%c",c);
}

/*getchar: unbuffered single character input*/

int getchar(void)
{
	char c;

	return (read(0, &c, 1) == 1) ? (unsigned char) c : EOF;
}

/*getchar_buffered: simple buffered version*/
int getchar_buffered(void)
{
	static char buf[BUFSIZ];
	static char *bufp = buf;
	static int n = 0;

	if(n == 0) {
		n = read(0, buf, sizeof buf);
		bufp = buf;
	}
	return (--n >=0) ? (unsigned char) *bufp++ : EOF;
}
