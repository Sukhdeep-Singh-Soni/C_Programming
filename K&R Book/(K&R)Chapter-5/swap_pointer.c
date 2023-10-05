#include<stdio.h>
void swap(int *, int *);
main()
{
	int a=20,b=30;

	printf("before swap: %d\t%d\n",a,b);
	swap(&a,&b);
	printf("after swap: %d\t%d\n",a,b);

	return 0;
}

/*swap: swap actual values for calling function with pointers*/
void swap(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
