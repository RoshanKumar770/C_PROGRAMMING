#include<stdio.h>
float conv(float c);
int main(){
     printf("The temp in faraheit is %f\n",conv(32));
     return 0;
}
float conv(float c){
     float fra;
     fra=(c*(9.0/5.0)+32);
     return fra;
}