#include <stdio.h>
int main()
{
     int marks[3]; // inisilizing the array
     printf("Enter phy: ");
     scanf("%d", &marks[0]);// input the array
     printf("Enter chem: ");
     scanf("%d", &marks[1]);
     printf("Enter maths: ");
     scanf("%d", &marks[2]);
     printf("phy=%d\nchem=%d\nmaths=%d\n", marks[0], marks[1], marks[2]); // printing the array
     return 0;
}