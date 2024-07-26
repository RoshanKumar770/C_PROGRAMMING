#include <stdio.h>
void check(int*n);
int main()
{
     int *n = 4;
     check(&n);
     printf("%u\n",&n);// Call by reference means that it changes the value but address will be remain same...
     return 0;
}
void check(int*n)
{
     printf("%u\n", n);
}
