#include<stdio.h>
#include<stdbool.h>

void main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d\n",a);
    printf("b is %d",b);
}