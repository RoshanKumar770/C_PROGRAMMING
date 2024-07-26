#include <stdio.h>
int main()
{
     float item[]={30.0,40.0,30.0};        //inisilization with declaration --------1st way
     // printf("Enter 1st item price: ");                                   --------2nd way
     // scanf("%f", &item[0]);
     // printf("Enter 2nd item price: ");
     // scanf("%f", &item[1]);
     // printf("Enter 3rd item price: ");
     // scanf("%f", &item[2]);

     printf("Total price of 1st item %f\n", item[0] + (item[0] * 0.18));
     printf("Total price of 2nd item %f\n", item[1] + (item[1] * 0.18));
     printf("Total price of 3rd item %f\n", item[2] + (item[2] * 0.18));
     return 0;
}