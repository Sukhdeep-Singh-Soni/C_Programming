#include<stdio.h>
/* count characters from input*/
main()
{
 long nc;
 while(getchar() != EOF)
    ++nc;
 printf("%ld\n",nc);
}
