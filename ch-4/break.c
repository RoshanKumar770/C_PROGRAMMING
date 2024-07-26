#include<stdio.h>
int main()
{
     int i;
     for(i=1;i<=5;i++){
          if (i==3){
               break;
          }
          printf("%d\n",i);
     }
     printf("end\n");
     return 0;
}