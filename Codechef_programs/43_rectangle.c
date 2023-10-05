#include<stdio.h>

main() {
	int T,a,b,c,d;

	scanf("%d",&T);
	while(T--) {
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a == b && c == d)
			printf("Yes\n");
		else if(a == c && b == d)
			printf("Yes\n");
		else if(a == d && b == c)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
