#include<stdio.h>
int sum(int n);
int main(){
     printf("the sum is %d",sum(5));
     return 0;
}
int sum(int n){
     if (n==1){
          return 1;
     }
     int smo=sum(n-1);
     int sadd=smo+n;
     return sadd;
}