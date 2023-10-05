#include<stdio.h>  //i/o library
/* reduce 2 or more blanks by a single blank*/
main() {  //start of main
 int lastc='a',c;
 while((c = getchar()) != EOF) { //run the loop till EOF encounters
         if(c == ' '){           //checks if c is a space
              if(lastc == ' '){  //check if last char is also a space
                    ;           //null statement
                 } else putchar(' '); // can also write putchar(c); doesn't affect the program at all.
            } else {
         putchar(c);}  //if c is not a space char
         lastc = c;    // make lastc equals c in the end because we need for c to go ahead a char and compare its last value with its current value
        }  //end of while
} //end of main
