#include<stdio.h>

main(){
	char c;

	scanf("%c",&c);
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		printf("Vowel\n");
	else
		printf("Consonant\n");

	return 0;
}
