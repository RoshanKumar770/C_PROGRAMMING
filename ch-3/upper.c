#include<stdio.h>
int main()
{
     char ch;
     printf("Enter one charater ");
     scanf("%c",&ch);
     if(ch>='A'&&ch<='Z'){
          printf("The charater is Uppercase\n");
     }
     else{
          printf("The charater is lowercase\n");
     }
     return 0;
}
