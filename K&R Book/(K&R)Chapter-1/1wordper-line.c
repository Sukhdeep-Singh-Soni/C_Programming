#include<stdio.h>
#define IN 1
#define OUT 0
/* outputting the input one word per line 1st version*/
main() { //startof main
 int i,c,nw,state=OUT,j;
 nw = 0;
 //for(i = 0 ; i < WORDLEN ; ++i) { //start of for loop to initialize it to zeros
   //          word[i] = 0;
     //      }
 //i=0; //to again use value of i in loop
 while((c = getchar()) != EOF) { //start of while
         if(c == ' ' || c == '\t' || c == '\n') {  //start of if for checking
                     state = OUT;
                     putchar('\n');
             } else if(state == OUT) { //start of else if
                   state = IN;
                   ++nw;
                   putchar(c);
                  }
               else { //start of else 
                  putchar(c);
                } //end of else
      } //end of while
}//end of main
