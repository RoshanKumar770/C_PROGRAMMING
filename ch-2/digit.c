#include<stdio.h>
#include<ctype.h>
int main()
{
     char ch;
     printf("enter the charater ");
     scanf("%c",&ch);
     if (isdigit(ch))
     {
          printf("The charater is digit\n");
     }
     else{
          printf("The charater is not a digit\n");
     }
     return 0;
    
}