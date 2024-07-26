#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
     int x = 4, y = 5;
     //swap(x, y);
     _swap(&x, &y);
     // printf("a=%d & b=%d\n",x, y);//call by value
     printf("x=%d & y=%d\n", x, y); // call by reference
     return 0;
}
// void swap(int a, int b)
// {
//      int t;
//      t = a;
//      a = b;
//      b = t;
//      printf("a=%d & b=%d\n", a, b);
// }
void _swap(int *a, int *b)
{
     int t;
     t = *a;
     *a = *b;
     *b = t;
     printf("a=%d & b=%d\n", *a, *b);

}