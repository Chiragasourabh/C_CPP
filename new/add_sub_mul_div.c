
#include<stdio.h>
#include<stdbool.h>

float add(float n1, float n2){return n1+n2;}
float sub(float n1, float n2){return n1-n2;}
float mul(float n1, float n2){return n1*n2;}
float div(float n1, float n2){if(n2==0){return 0;}else{return n1/n2;}}

void main(){
    float n1,n2;
    int ch;
    do{
        printf("\nMathematical Operations\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\nEnter yor choice : ");
        scanf("%d",&ch);
        if (ch==5){break;}
        printf("Enter number 1 : ");
        scanf("%f",&n1);
        printf("Enter number 2 : ");
        scanf("%f",&n2);
        switch(ch){
            case 1 :
                printf("Addition of %f, %f is %f.",n1,n2,add(n1,n2));
                break;
            case 2 :
                printf("Subtraction of %f, %f is %f.",n1,n2,sub(n1,n2));
                break;
            case 3 :
                printf("Multiplication of %f, %f is %f.",n1,n2,mul(n1,n2));
                break;
            case 4 :
                printf("Division of %f, %f is %f.",n1,n2,div(n1,n2));
                break;
            default:
                printf("invalid choice");
        }
    }while(true);
}