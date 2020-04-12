#include<stdio.h>
#include<stdbool.h>

void main(){
    int number,k;
    printf("Enter number in decimal : ");
    scanf("%d",&number);
    for(int i=16;i>=0;i--){
        k = number >> i;
        k&1 ? printf("1") : printf("0");
    }
}