#include <stdio.h>
int main(){
  float a,b,d;
  int c;

  printf("Enter your first number  :");
  scanf( "%f",&a);

  printf("Enter your second number :");
  scanf("%f",&b);

  printf("1 enter to addition\n");
  printf("2 enter to subtraction\n");
  printf("3 enter to multiplication\n");
  printf("4 enter to division\n");
  
  while(1){
  printf("Enter your choice :");
  scanf("%d",&c);

    switch (c) {
      case 1:
        d=a+b;
        printf("Addition of two number is : %.2f\n",d);
        break;
      case 2:
        d=a-b;
        printf("Subtraction of two number is : %.2f\n",d);
        break;
      case 3:
        d=a*b;
        printf("Multiplication of two number is : %.2f\n",d);
        break;
      case 4:
        d=a/b;
        printf("Division of two number is : %.2f\n",d);
        break;
      default:
        printf("Invalid choice\n");
        continue;
      
    }
   break; 
  }

  return 0;
}