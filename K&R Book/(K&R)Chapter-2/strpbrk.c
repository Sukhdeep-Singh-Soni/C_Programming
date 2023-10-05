/*program to return  the staring index of the first occurence of a character 
	of s2 string in s1 string*/
#include<stdio.h>
#define OUT 0
#define IN 1
int index_ret(char s1[], char s2[]);
main(){
	char s1[] = "hbbllo world!";
	char s2[] = "eld";
	printf("%d\n",index_ret(s1,s2));
}//end of main

/*index_ref function*/
int index_ret(char s1[], char s2[]){

	int i,j,state=IN;
	for(i=0;s1[i]!='\0' && state == IN;i++)
		for(j=0;s2[j]!='\0';j++)
			if(s1[i] == s2[j])
				state = OUT;

	if(s1[i] == '\0')
	return -1;
	else
	return i-1;
}//end of index_ret function

/*another version of index_ret function
int index_ret(char s1[], char s2[]) {
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		for(j=0;s2[j]!='\0';j++)
			if(s1[i] == s2[j])
				return i;

	return -1;
}
*/

