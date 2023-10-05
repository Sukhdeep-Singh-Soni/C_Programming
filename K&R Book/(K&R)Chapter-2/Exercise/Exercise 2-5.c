#include<stdio.h>

int any(char s1[],char s2[]);
main()
{
	char s1[] = "hello people";
	char s2[] = "people";

	printf("%d\n",any(s1,s2));
}

int any(char s1[], char s2[]) {
	int i,j;

	for(i = 0; s1[i] != '\0'; i++)
		for(j = 0; s2[j] != '\0'; j++)
			if(s1[i] == s2[j])
				return i;
	return -1;
}
