#include <stdio.h>
int main(){
    int num = 3;

    do{
        printf("value is: %d\n",num);
        num = num + 3;

    } while (num < 100);

    return 0;
}
