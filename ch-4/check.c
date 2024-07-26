#include<stdio.h>
int main()
{
     int i=5;
     {
     printf("%d\n",i++);//post increment& pre increment
     printf("%d\n",i);
     }
     {
     printf("%d\n",i--);//post decrement& pre decrement
     printf("%d\n",i);
     }
     return 0;
}