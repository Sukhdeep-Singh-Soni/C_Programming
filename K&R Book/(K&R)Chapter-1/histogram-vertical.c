#include<stdio.h>
#define IN 1
#define OUT 0
#define NWORD 1000
/* histogram for input words length 
   2nd Version */
main() {
 int i,j,c,state=OUT,word[NWORD],nw=0,max=0;
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
      } //end of while
    for(i = 0 ; i < nw ; ++i)
          printf("%d ",word[i]); //just printing the frequencies/lengths of each word
    printf("\n");

   for(i = 0 ; i < nw ; i++) {
           if(max < word[i])
               max = word[i]; //calculate max so that the next loop will not depend on a constant value
      }

   for(i = 0 ; i <= max ; ++i ) {
      for(j = 0 ; j < nw ; ++j)
         if(i < word[j]) //checks if 0 < word[j]=length of word[0] if true print a * else print a space
           {putchar('*');putchar(' ');} //can put any char instead of * like |,@ etc.
        else
            {putchar(' ');putchar(' ');}
     putchar('\n');
       }
}//end of main
