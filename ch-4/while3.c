#include<stdio.h>
int main()
{
     int i;
     for(i=5;i<=50;i++){
          if (i%2==0){
               continue;
          }
          printf("%d\n",i);
     }
     return 0;
}