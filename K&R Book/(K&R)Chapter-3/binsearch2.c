/*binsearch 2nd version*/
#include<stdio.h>
main(){

}//end of main

/*binsearch function*/
int binsearch(int x, int v[], int n){
	int low,high,mid;
	low = 0;
	high = n-1;
	mid = (low + high) / 2;
	while( low <= high && x != v[mid]){
		if(x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high) / 2;
		}//end of while
		if(x == v[mid])
			return mid;
		else
			return -1;
}
