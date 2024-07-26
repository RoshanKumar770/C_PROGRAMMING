#include<stdio.h>
float rect(float l, float b);
float sq(float s);
float c(float r);
int main()
{
     float l, b,s,r;
     printf("Enter the length and breadth of the rectangle: ");
     scanf("%f %f", &l, &b);
     printf("Enter the side of the square: ");
     scanf("%f", &s);
     printf("Enter the radius of the circle: ");  
     scanf("%f", &r);
     printf("The area of the rectangle is %f\n", rect(l, b));
     printf("The area of the square is %f\n", sq(s));
     printf("The area of the circle is %f\n", c(r));
     return 0;
}
float rect(float l, float b){
     return l*b;
}
float sq(float s){
    return s*s;
}
float c(float r){
    return 3.14*r*r;
}