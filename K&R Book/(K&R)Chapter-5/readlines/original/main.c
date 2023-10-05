#include<stdio.h>
#define  MAXLINES 5000

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

char *lineptr[MAXLINES];	/*pointers to text lines*/

/*sort input lines*/
main()
{
	int nlines; /*number of input lines read*/

	if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr,0,nlines-1);
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("error: input too big to sort\n");
		return -1;
	}
}
