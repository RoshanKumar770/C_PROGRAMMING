#include<stdio.h>
int main()
{
     int n;
     do{
          printf("Enter the number: ");
          scanf("%d",&n);
          if(n%7==0){
               break;
          }
          else {
          printf("Entered no. is not a multiple of 7 try again\n");
          }
          }
     while(1);
     {
          printf("Multiple of 7\n");
     }
     return 0;
}