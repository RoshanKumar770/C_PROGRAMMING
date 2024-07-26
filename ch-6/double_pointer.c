#include <stdio.h>
int main()
{
     int i = 5;
     int *prt = &i;
     int **prtl = &prt;
     printf("%d\n", **prtl);
     return 0;
}