#include<stdio.h>
int sum(int a, int b);
int main()
{
     int a,b;
     printf("Enter first no. ");
     scanf("%d",&a);
     printf("Enter second no. ");
     scanf("%d",&b);
     int s=sum(a, b);
     printf("The sum is %d\n",s);
     return 0;
}
int sum(int x,int y){
     return x+y;
}