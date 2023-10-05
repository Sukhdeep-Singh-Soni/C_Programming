#include<stdio.h>
#define IN 1
#define OUT 0
#define NWORD 1000
/* print the histogram of lengths of words in its input --:Horizontal Histogram:--*/
main() {
 int i,c,nw=0,state=OUT,word[NWORD],j;
 for(i = 0 ; i < NWORD ; ++i)
         word[i] = 0;
 while((c = getchar()) != EOF) {
            if(c == ' ' || c == '\t' || c == '\n')
                       state = OUT;
            else {
                 if(state == OUT) {
                       state = IN;
                       ++nw;
                     }
                   ++word[nw-1];
                 }
      }//end of while
      for(i = 0 ; i < nw ; ++i) {
             printf(" %d\t",word[i]);
             for(j = 0 ; j < word[i] ; ++j)
                       printf("*");
             printf("\n");
            }
      // printf("%d",nw);
}//end of main
