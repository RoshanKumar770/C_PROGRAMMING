#include <stdio.h>
void square(int n);
void square2(int* n);
int main()
{
     int no = 10;
     square(no);
     printf("square = %d\n\n", no);
     square2(&no);
     printf ("square = %d\n", no);
     return 0;
}
void square(int n)    // call by value
{
     n = n * n;
     printf("square = %d\n", n);
}
void square2(int* n){ //call by reference
    *n=(*n)*(*n);
    printf("square = %d\n",*n);
}