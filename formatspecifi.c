#include <stdio.h>
int main (){
  int x=5;
  printf("%i\n\n\n",x);

  int y=10;
  printf("%d\n\n\n",y);
  /*(%d,%i) are the same
   %i is for integer*/

  int q='d';
  printf("%c\n\n\n",q);
  /*(%c)means character
  its identify with only one quatations('')*/

  int z='SUDU';
  printf("%c\n\n\n",z);
  //int display only one character(last character)
  
  float a=350.02342232145;
  printf("%f\n\n\n\n\n\n\n",a);

  printf("%c\n",'A');
  printf("%c\n",'AB');
  printf("%c\t%c\n\n\n\n",'A','B');

  printf("%d\n",2+3);
  printf("%f\n",2.3+3.2);
  printf("%.2f\n\n\n\n",2.3+3.2);
  //.2 is use for limit your number of decimals
  
  printf("%20d\n",25); 
  //fieldwidth
  return 0;
}
