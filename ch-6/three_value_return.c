#include <stdio.h>
void calc(int a, int b, int *sum, int *prod, int *avg);
int main()
{
     int a = 4;
     int b = 8;
     int sum, prod, avg;
     calc(a, b, &sum, &prod, &avg);
     printf("sum=%d & prod=%d & avg=%d\n", sum, prod, avg);
     return 0;
}
void calc(int a, int b, int *sum, int *prod, int *avg)
{
     *sum = a + b;
     *prod = a * b;
     *avg = (a + b) / 2;
}