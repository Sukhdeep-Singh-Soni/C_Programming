#include<stdio.h>
main()
{
	void qsort(int v[], int left, int right);
	int i,v[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	qsort(v,0,9);
	for(i = 0; i < 10; i++)
		printf("%d ",v[i]);
}

/*qsort: sort v[left]...v[right] in increasing order*/
void qsort(int v[], int left, int right)
{
	int i,last;
	void swap(int v[], int i,int j);

	if(left <= right)	/*do nothing if array contains*/
		return;		/*fewer than two elements*/
	swap(v, left, (left + right) / 2);
	last = left;
	for(i = left + 1; i <= right; i++)	/* partition */
		if(v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);			/*restore partition element*/
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

/*swap: interchange v[i] and v[j]*/
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
