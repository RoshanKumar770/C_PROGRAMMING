#include<stdio.h>
void table(int n);
int main()
{
     int n;
     printf("Enter the no. ");
     scanf("%d",&n);
     table(n);//argument/actual parameter
     return 0;
}
void table(int n)//parameter/formal parameter
{
     int i;
     for (i=1;i<=10;i++){
          printf("%d\n",i*n);
     }
}