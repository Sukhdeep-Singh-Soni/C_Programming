/* print correctly the length of arbitrary long lines and text*/
#include<stdio.h>
#define MAXLINE 1000
int getline_length(char s[], int maxline);
void copy(char to[],char from[]);
main(){
  int len,max;
  char line[MAXLINE],longest[MAXLINE];
 max = 0;
 while((len = getline_length(line,MAXLINE)) > 0) {
                printf("%d\n%s",len,line);
		if(len > max){
                  max = len;
                  copy(longest,line);
                 }
      }
             if(max > 0)
               printf("\n\n\n%s\n\n\n",longest);
 return 0;
}//end of main

/*Start of getline function */
int getline_length(char s[], int lim) {
 int i,c,j=0;
 for(i=0 ; (c = getchar()) != EOF && c != '\n' ; ++i){
         if(i < lim-2) {
	     s[j] = c;
	     ++j;
	   }
    }
   if(c == '\n') {
        s[j] = c;
        ++j;
        ++i;
       }
    s[j] = '\0';
   return i;
}//end of getline

/*Start of copy function*/
void copy(char to[], char from[]) {
  int i;
  i=0;
  while((to[i] = from[i]) != '\0')
          ++i;
}//end of  copy
