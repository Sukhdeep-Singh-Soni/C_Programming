#include<stdio.h>
#define MAX 200

int local_pow(int,int);
main()
{
	int T,N,arr[MAX],m,i,k,l=0,x,temp=0,n,res[MAX],r=0;

	for(k=0;k<MAX;k++)
		res[k] = 0;

	scanf("%d",&T);
	while(T--) {
		scanf("%d",&N);
		n = N;
		arr[0] = 1;
		m = 1;
		i = 1;
		while(i <= N) {
			for(l = 0; l < m; l++) {
				x = arr[l] * i + temp;
				arr[l] = x % 10;
				temp = x / 10;

			}
			while(temp > 0) {
				arr[l] = temp % 10;
				m = l+1;
				temp /= 10;
			}
		//for(k = m-1; k >=0; k--)
		//	res[r] = arr[k];

		//	r++;
		//for(k = m-1; k >=0; k--)
		//	printf("%d",arr[k]);
		//printf("\n");
		i++;
		}
		for(int s = m,k = m-1; k >= 0; k--)
			res[r] += arr[k]*local_pow(10,--s);  //works for values in range of integers
		r++;
		//outside range just print array in opposite direction
		//for(k =m-1; k >= 0; k--)
		//	printf("%d",arr[k]);
		//printf("\n");

	}
	for(k = 0; k < r; k++)
			printf("%d\n",res[k]);

	return 0;
}

int local_pow(int base, int power)
{
	int i,n = 1;

	for(i = 1; i <= power; i++)
		n  = n * base;
	return n;
}
