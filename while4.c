#include <stdio.h>
int main(){
    int num;

    printf("enter the number between 1 to 10000: ");
    scanf("%d", &num);

    while(num<10000){
        num += 1;
        printf("value:%d\n", num);
    }

    return 0;
}
