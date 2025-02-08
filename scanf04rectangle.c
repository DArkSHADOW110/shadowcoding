#include <stdio.h>
int main(){
  float area,height,width;
  printf("enter the height:");
  scanf("%f",&height);

  printf("enter the width:");
  scanf("%F",&width);

  area =height*width;

  printf("the area of the rectangle is:%.2f",area);
  
  return 0;
}