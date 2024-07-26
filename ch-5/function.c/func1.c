#include<stdio.h>
//func declaration 
void hello();
int main()
{
     hello();//func cell
     hello();
     hello();
     return 0;
}
//func defination
void hello(){
     printf("hello\n");
}