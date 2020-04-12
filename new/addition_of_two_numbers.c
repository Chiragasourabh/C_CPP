#include<stdio.h>
#include<stdbool.h>

int addTwoNumber(int a,int b){
    return a+b;
}

void main(){
    int number1,number2;
    char op;
    do{
        printf("addition of Two Numbers\n");
        printf("Enter Number 1 : ");
        scanf("%d",&number1);
        printf("\nEnter Number 2 : ");
        scanf("%d",&number2);
        printf("Addition of %d and %d is %d .\n\n",number1,number2,addTwoNumber(number1,number2));
        printf("Do you want to repeat the operation ? (Y/n) : ");
        scanf("\n%c",&op);
        if(op=='y' || op =='Y'){}
        else{break;}
    }while(true);
}