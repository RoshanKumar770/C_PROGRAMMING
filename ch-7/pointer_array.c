#include <stdio.h>                              //  int = 4 byte
int main()                                      //  float = 4 byte
{                                               //  char = 1 byte
     int age = 22;
     int *ptr = &age; // increment and decrement based on the value of capicity of 1 container of diffrent datatype
     printf("ptr=%u\n", *ptr);
     ptr++;
     printf("ptr=%u\n", *ptr);
     ptr--;
     printf("ptr=%u\n", *ptr);
     return 0;
}