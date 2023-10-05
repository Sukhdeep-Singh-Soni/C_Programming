#include<stdio.h>

main() {
	int T,N,no,yesi,noti,n;
	char c;

	scanf("%d",&T);
	while(T--) {
		scanf("%d",&N);
		n = N;
		while(N--) {
			scanf(" %c",&c);
			if(c == 'N')
				++no;
			else if(c == 'Y')
				++noti;
			else if(c == 'I')
				++yesi;
		}
		if(yesi > noti)
			printf("INDIAN\n");
		else if(yesi < noti)
			printf("NOT INDIAN\n");
		else if(no == n)
			printf("NOT SURE\n");
		no = yesi = noti = 0;
	}

	return 0;
}
