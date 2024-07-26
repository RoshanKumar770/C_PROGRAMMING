#include<stdio.h>
void nameste();
void bonjour();
int main(){
     char ch;
     printf("enter i for  nameste and f for bonjour ");
     scanf("%c",&ch);
     nameste();
     return 0;
     }
void nameste(){
     printf("nameste\n");
     bonjour();
}
void bonjour(){
     printf("bonjour\n");
}
