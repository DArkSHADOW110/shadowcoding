#include <stdio.h>
int main(){
  printf("\t\t\tINTEGER DATA TYPES\n\n\n");
  //integer data type (%d or %i)
  printf("char (1 byte)=============(-128 to 127) or (0-255)\n");
  printf("unsign char(1 byte)=======(0-255)\n");
  printf("sign char(1 byte)=========(-128 to 127)\n\n\n");
  printf("int(2 or 4 bytes)=========(-32,768 to 32,767) or -2,147,483,648 to 2,147,483,647)\n");
  printf("unsign int(2 or 4 bytes)==(0 to 65,535) or 0 to 4,294,967,295)\n\n\n");
  printf("short(2 byte)=============(-32768 to 32767)\n");
  printf("unsign short int(2 byte)==(0 to 65,535)\n\n\n");
  printf("long(4 bytes)=============(-2,147,483,648 to 2,147,483,647)\n");
  printf("unsign long(4 bytes)======(0 to 4,294,967,295)\n\n\n");
  printf("\t\t\tFLOAT DATA TYPES\n\n\n");
  printf("float(4 bytes)============(1.2*10^-38 to 3.4*10^38)\n");
  printf("double(8 bytes)===========(2.2*10^-308 to 1.7*10^308)\n");
  printf("long double(10 bytes)=====(3.4*10^-4932 to 1.1*10^49)\n");
  //Character show with %C and Boolean show with %d
  return 0;
}