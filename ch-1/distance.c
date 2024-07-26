#include<stdio.h>
int main()
{
    float distance,meter,feet;
    printf("Enter distance is km ");
    scanf("%f",&distance);
    meter=distance*1000;
    printf("Distance in meter is %f m\n",meter);
    feet=distance*12;
    printf("distance in feet is %f f\n",feet);
    return 0;
}