#include<stdlib.h>

int numcmp(char*,char*);

/*qsort: sort v[left]...v[right] in increasing order*/
void q_sort(void *v[], int left, int right, int (*comp)(void*,void*))
{
	int i, last;
	void swap(void *v[], int i, int j);

	if(left >= right)
		return;	/*do nothing if fewer than 2 elements*/
	swap(v, left, (left+right)/2);
	last = left;
	for(i=left+1; i <= right; i++)
		if((*comp)(v[i],v[left]) < 0)
			swap(v, ++last, i);
	swap(v,left,last);	//restore the partition element
	q_sort(v,left,last-1,comp);
	q_sort(v,last+1,right,comp);
}

/*swap: interchange v[i] and v[j]*/
void swap(void *v[], int i, int j)
{
	void *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

/*numcmp: */
int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);
	if(v1 < v2)
		return -1;
	else if(v1 > v2)
		return 1;
	else
		return 0;
}

/*strcmp: compare two strings returning an int as status*/
int str_cmp(char *s, char *t)
{
	for(; *s == *t; s++,t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
}
