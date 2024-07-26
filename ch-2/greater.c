#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter 1st number ");
     scanf("%d",&a);
     printf("enter 2nd number ");
     scanf("%d",&b);
     printf("enter 3rd number ");
     scanf("%d",&c);
     if (a>b&&a>c){
          printf("1st no.is greater\n");
     }
     else if (a<b&&b>c){
          printf("2nd no.is greater\n");
     }
     else {
          printf("3rd no.is greater\n");
     }
     return 0;
}
