#include<stdio.h>
#include<stdbool.h>

long fact(long number){
    if(number>0){return number*fact(number-1);}
    else{return 1;}
}

long nPr(long n,long r){
    return fact(n)/fact(n-r);
}

long nCr(long n,long r){
    return fact(n)/(fact(n-r)*fact(r));
}

void main(){
    int n,r,ch;
    do{
        printf("\n\n1. nCr\n2. nPr\n3. Exit\n\nEnter yor choice : ");
        scanf("%d",&ch);
        if (ch==3){break;}
        printf("Enter n : ");
        scanf("%d",&n);
        printf("Enter r : ");
        scanf("%d",&r);
        switch(ch){
            case 1 :
                printf("nCr of %d, %d is %d.",n,r,nCr(n,r));
                break;
            case 2 :
                printf("nPr of %d, %d is %d.",n,r,nPr(n,r));
                break;
            default:
                    printf("invalid choice");
            }
    }while(true);
}