/*creating the for loop in getline function without using
	&& or || operators
	Original:-
	for(i=0;i<lim-1 && (c = getchar()) != '\n' && c != EOF)*/
#include<stdio.h>
#define LIM 100
main(){
	int i=0,loop=1,c,j;
	char s[LIM];
	while(loop){
             if(i<LIM-1){
			if((c = getchar()) != '\n') {
				if(c != EOF){
					s[i] = c;
					++i;
					}
				else {
					loop=0; }
			}//end of inner if 2nd if
			else {
				loop=0;
				}//end of inner else 2nd else
		}//end of outer if 1st if
		else {
				loop=0;
			}//end of outer else 1st else
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	for(j=0;j<i;j++)
		printf("%c",s[j]);
}//end of main

