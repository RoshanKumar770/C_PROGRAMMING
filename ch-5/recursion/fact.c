#include<stdio.h>
int fact(int n);
int main(){
     printf("The factorial is %d\n",fact(5));
     return 0;
}
int fact(int n){
     if(n==0){
          return 1;
     }
     int fmo,fmul;
     fmo=fact(n-1);
     fmul=fmo*n;
     return fmul;
}