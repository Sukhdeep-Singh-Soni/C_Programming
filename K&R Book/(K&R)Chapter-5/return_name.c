#include<stdio.h>
char *month_name(int);

main()
{
	int i,n = 4;
	char *p = month_name(n);

	for(i = 0; *p != '\0'; i++)
		printf("%s",p);
}

/*month_name: return name of n-th month*/
char *month_name(int n)
{
	char *name[] = {
	"Illegal month",
	"January","Feburary","March","April",
	"May","June","July","August","September",
	"October","November","December"
	};

	return (n < 1 && n > 12) ? name[0] : name[n];
}
