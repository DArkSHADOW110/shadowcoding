#include <stdio.h>
int main(){
    int age;
    
    printf("How old are you?\t ");
    scanf("%d",&age);
    
    if(age<=18){
     printf("\nSORRY!!.You cannot vote!");   
    }
    printf("\nGREAT!!. You can vote!");
    
    return 0;
}