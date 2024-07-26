#include<stdio.h>
int main()
{
     int n;
     printf("Enter the n terms: ");
     scanf("%d",&n);
     int s=0;
     for(int i=1,j=n; i<=n && j>=1 ;i++,j--){// for(i=n;j>=1;j--){//sum by reverse order
          s=s+i;//s=s+j;
          printf("%d\n",i);
     }
     printf("The sum is %d\n",s);
     // for(int i=n;i>=1;i--){
     //      printf("%d\n",i);}
     return 0;
}
