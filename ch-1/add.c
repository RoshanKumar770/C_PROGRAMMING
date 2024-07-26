#include<stdio.h>
int main()
{
int a ,b, sum ;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
/*int sum=a+b;
printf("The sum is = %d\n",sum);*/
printf("The sum is = %d\n",sum=a+b); //efficient way
return 0;
}
