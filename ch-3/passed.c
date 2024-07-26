#include<stdio.h>
int main()
{
     int m;
     printf("Enter the marks ");
     scanf("%d",&m);
     if (m<=100)
     {
          printf("");
          if (m>=40){
               printf("The student is passed\n");

          }
          else{
               printf("The student is failed\n");
          }
     }
     else{
          printf("The enter number is not valid\n");
     }
     return 0;
}