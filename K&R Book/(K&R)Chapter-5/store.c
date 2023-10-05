#include<stdio.h>
#define ALLOCSIZE 1000		/*size of available space*/

static char allocbuf[ALLOCSIZE];	/*storage for alloc*/
static char *allocp = allocbuf;		/*next free position*/
char *alloc(int);
main()
{
	int n = 20;
	char *p;

	p = alloc(n);
	printf("%d\n",p);
}


/*alloc: return pointer to n characters*/
char *alloc(int n)
{
	if(allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n; /*old p*/;
	}
	else		/*not enough room*/
		return 0;
}

/*afree: free storage pointed to by p*/
void afree(char *p)
{
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}
