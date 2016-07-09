#include<stdio.h>
void main(){
  int a=-1,b=1,c,n,i;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("the fibonacii series are:");
  for(i=0;i<n;i++){
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
  }
}
  
