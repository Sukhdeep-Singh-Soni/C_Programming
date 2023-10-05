#include<stdio.h>
#define swap(t,x,y)   {	t _z;	\
			_z = x;	\
			x = y;	\
			y = _z;	}

main()
{
int x = 4, y = 6;
printf("before swap: x:%d\ty:%d\n",x,y);
swap(int, x, y);
printf("after swap : x:%d\ty:%d\n",x,y);
}
