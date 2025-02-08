#include <stdio.h>
int main()
{
    int x, y, z;

    printf("enter the value: ");
    scanf("%d", &z);

    for (x = 0; x <= z; x++)
    {
        for (y = 0; y < x; y++)
        {
            printf("%d", x);
        }
        printf("\n");
        }
    
    return 0;
}
