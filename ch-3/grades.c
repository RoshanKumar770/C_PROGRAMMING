#include<stdio.h>
int main()
{
     int m;
     printf("Enter the marks ");
     scanf("%d",&m);
     if(m<=100)
     {
          printf("");
     }
     if(m<30){
          printf("The student is failed\n");
     }
     else if(m>30&&m<40){
          printf("grade is C\n");
     }
     else if(m>40&&m<60){
          printf("grade is B\n");
     }
     else if(m>60&&m<80){
          printf("grade is B+\n");
     }
     else if(m>80&&m<90){
          printf("grade is A\n");
     }
     else if(m>90&&m<100){
          printf("grade is A+\n");
     }
     else{
          printf("The number is not valid\n");
     }
     return 0;
}