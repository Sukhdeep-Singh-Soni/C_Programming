#include<stdio.h>

void squeeze(char s1[], char s2[]);
main()
{
	char s1[]="hello people";
	char s2[]="hp";

	squeeze(s1,s2);
	printf("%s\n",s1);
}

void squeeze(char s1[], char s2[]) {
	int i,j,k=0;

	for(i = 0; s1[i] != '\0'; i++) {
		for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
			;
		if(s2[j] == '\0')
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}
