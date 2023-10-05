/*binsearch program to do binary search 1st version*/
#include<stdio.h>
int binsearch(int x, int v[], int n);
main(){
	int x=5,n=10,v[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",binsearch(x,v,n));
}//end of main

/*binsearch function*/
int binsearch(int x, int v[], int n){
	int low,mid,high;
	low = 0;
	high = n-1;
	while(low <= high){
		mid = (low + high) / 2;
		if(x < v[mid])
			high = mid - 1;
		else if(x > v[mid])
			low = mid + 1;
		else
			return  mid;
	}//end of while
  return -1;
}
