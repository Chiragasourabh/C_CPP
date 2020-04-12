#include<stdio.h>
#include<stdbool.h>

int fact(int number){
    if(number>0){return number*(fact(number-1));}
    else{return 1;}
}

void main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    printf("factorial of %d is %d",number,fact(number));
}