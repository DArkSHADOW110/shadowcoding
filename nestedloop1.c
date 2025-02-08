#include <stdio.h>
int main (){
    int x, y,z;

    printf("enter the number :");
    scanf("%d",&z);

    for (x = 1; x <=z; x++)
    {
        for(y=1;y<=x;y++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
