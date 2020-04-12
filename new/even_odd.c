#include<stdio.h>
#include<stdbool.h>

bool isEven(int number){
    if(number%2==0){return true;}
    else{return false;}
}

char * map(bool b){
    if(b){return "even";}
    else{return "odd";}
}

void main(){
    int number;
    char op;
    do{
        printf("Checking if a number is even or not ?\nEnter a number : ");
        scanf("%d",&number);
        printf("number %d is %s.",number,map(isEven(number)));
        printf("\n\nDo you want to repeat operation ? (Y/n) : ");
        scanf("\n%c",&op);
        if(op=='y'||op=='Y'){}
        else{break;}
    }while(true);
}