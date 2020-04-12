#include<stdio.h>
#include<stdbool.h>

int sumOfDigits(int number){
    int sum=0;
    while(number!=0){
        sum+=number%10;;
        number/=10;
    }
    return sum;
}

void main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    printf("sum is %d",sumOfDigits(number));
}