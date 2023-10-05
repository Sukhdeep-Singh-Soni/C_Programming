/*Version 2 of squeeze function with advancement*/
#include<stdio.h>
void remove_chars(char s1[], char s2[]);
main(){
	char s1[] = "containing string";
	char s2[] = "cngt";
	remove_chars(s1,s2);
}	/* end of main */

void remove_chars(char s1[], char s2[]){
	int i,j,k=0;
	for(i = k = 0 ; s1[i] != '\0' ; i++) {
		for( j = 0 ; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if(s2[j] == '\0')  //no match
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
	printf("%s",s1);
}	/*end of remoce_chars function*/
