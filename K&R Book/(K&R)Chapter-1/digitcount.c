#include<stdio.h>
/* count the occurences of each digit
   count no. of white spaces,newlines,tabs,
   count all other char*/
main() {
  int c,i,nwhite,nother,ndigit[10];
  for(i = 0 ; i < 10 ; ++i)
           ndigit[i] = 0;
  nwhite = nother = 0;
   //above for loop is to initialize ndigit to all 0's
   while((c = getchar()) != EOF) {
            if(c >= '0' && c <= '9')
                     ++ndigit[c - '0'];
            else if(c == ' ' || c == '\t' || c == '\n')
                      ++nwhite;
           else
                ++nother;
         }//end of while
       printf("\ndigits=");
       for(i = 0 ; i < 10 ; i++)
            printf(" %d",ndigit[i]);
        printf("\nwhite spaces=%d\nother characters=%d\n",nwhite,nother);
}//end of main
