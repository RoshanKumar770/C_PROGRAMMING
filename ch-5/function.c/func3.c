//NOTE 2 EXPLAINED: do changes in parameter but it will not reflect in argument 
#include<stdio.h>
void calc(float v);
int main(){
     float v=100.0;
     calc(v);
     printf("%f\n",v);// argument value of v is 100.0000
     return 0;
}
void calc(float v){
     v= v+(0.18*v);//parameter value of v is 118.0000
     printf("%f\n",v);
}
