#include<stdio.h>
#include<string.h>

#define MAXLINES 5000
#define MAXSTORE 5000
char *lineptr[MAXLINES];	/*pointers to text lines*/
char linestore[MAXSTORE];

int readlines(char *lineptr[],char *linestore, int nlines);
void writelines(char *lineptr[], int nlines);

void q_sort(void *v[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);
int str_cmp(char *,char *);

/*sort input lines*/
main(int argc, char *argv[])
{
	int nlines; /*number of input lines read*/
	int numeric = 0;	/*1 if numeric*/

	if(argc > 1 && strcmp(argv[1],"-n") == 0)
		numeric = 1;

	if((nlines = readlines(lineptr,linestore, MAXLINES)) >= 0) {
		q_sort((void **) lineptr,0,nlines-1,
		(int (*)(void *, void *))(numeric ? numcmp : str_cmp));
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("error: input too big to sort\n");
		return -1;
	}
}
