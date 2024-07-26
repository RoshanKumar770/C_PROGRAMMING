#include <stdio.h>
void check(int n);
int main()
{
     int n = 4;
     check(n);
     printf("%u\n", &n);// Call by value means that it only copyes the value and address both will changed...
     return 0;
}
void check(int n)
{
     printf("%u\n", &n);
}
