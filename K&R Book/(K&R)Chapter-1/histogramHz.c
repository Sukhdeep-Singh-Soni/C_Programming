#include<stdio.h>
#define ASCII 256
/* program to print the frequency of diff. characters in input */
main() {
 int max=0,c,word[ASCII],i,j;
 for(i = 0 ; i < ASCII ; ++i)
         word[i] = 0;
 while((c = getchar()) != EOF) {
      ++word[c];
      } //end of while
   for(i = 0 ; i < ASCII ; ++i)
      if(max < word[i])
         max = word[i];

for(i=0;i<ASCII;++i)
    printf("%d ",word[i]);
printf("\n");

for(i = 0 ; i <= max ; ++i) {
 for(j = 0 ; j < ASCII ; ++j)
        if(i < word[j])
         putchar('*');
        else
         putchar(' ');
   putchar('\n');
   }//end of outer for
}//end of main
