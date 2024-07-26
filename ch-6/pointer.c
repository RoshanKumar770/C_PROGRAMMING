#include <stdio.h>
// int main()
// {
//      int a = 33;
//      int *prt = &a; // single pointer
//      //int **prtl = &prt;c=int = *(prtl);  double pointer
//      printf("The value is :%d\n", a);
//      printf("The address is :%d\n", &a);
//      printf("The value is :%d\n",*ptr);
//      // printf("The address is :%p\n", &prt);
//      return 0;
// }
int main(){
     int age = 22;
     int *ptr = &age;
     // value
     printf("%d\n", age);
     printf("%d\n" ,* ptr);
     printf("%d\n", *(&age));
     return 0;
}