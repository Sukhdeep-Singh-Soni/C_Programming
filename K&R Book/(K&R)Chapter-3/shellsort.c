/*shellsort: sort v[0]..v[n-1] in increasing order*/
#include<stdio.h>
void shellsort(int v[], int n);
main(){
	int i,n=10,v[n],j=0;
	for(i=n;i>0;i--)
		v[j++] = i;
	printf("before sorting: ");
	for(i=0;i<n;i++)
		printf("%d ",v[i]);
	printf("\n");
	printf("after sorting: ");
	shellsort(v,n);
}//end of main

/*shellsort function*/
void shellsort(int v[], int n){
	int i,j,gap,temp;
	for(gap = n/2 ; gap > 0 ; gap /= 2)
	    for(i = gap ; i < n ; i++)
	       for(j = i - gap ; j>=0 && v[j] > v[j + gap] ; j -= gap) {
		   temp = v[j];
		   v[j] = v[j + gap];
		   v[j + gap] = temp;
		}//end of innermost for


	for(i=0;i<n;i++)
		printf("%d,",v[i]);
}//end of shell sort
