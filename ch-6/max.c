#include <stdio.h>
void max(int *a, int *b);
int main()
{
     int a, b;
     printf("Enter A :");
     scanf("%d", &a);
     printf("Enter B :");
     scanf("%d", &b);
     max(&a, &b);
     return 0;
}
void max(int *a, int *b)
{
     if (a < b)
     {
          printf("A is greater _value is %d\n", *a);
     }
     else
     {
          printf("B is greater _value is %d\n", *b);
     }
}