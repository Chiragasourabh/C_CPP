#include<stdio.h>
#include<stdbool.h>

bool isLeapYear(int year){
    if(year%400==0){return true;}
    else if(year%100==0){return false;}
    else if(year%4==0){return true;}
    else{return false;}
}

void main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    isLeapYear(year) ? printf("%d is a leap year.",year) : printf("%d is not a leap year.",year);
}