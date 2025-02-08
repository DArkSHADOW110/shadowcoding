#include <stdio.h>
int main(){
  float sum,x,y;
  printf("enter an integer:");
  scanf("%f",&x);

  printf("enter an integer:");
  scanf("%f",&y);

  sum=x+y;
  printf("sum=%.2f\n",sum);
  
  return 0;
}