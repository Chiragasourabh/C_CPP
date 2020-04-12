#include<stdio.h>
#include<stdbool.h>

int pattern1(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int pattern2(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int pattern3(int size){
    for(int i=0;i<size;i++){
        for(int j=size;j>=0;j--){
            if(j>i){if(j!=size){printf("  ");}}
            else{printf("* ");}
        }
        printf("\n");
    }
}

int pattern4(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int pattern5(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(j>=i){printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }
}

void main(){
    int size,r=0;
    printf("Enter the size : ");
    scanf("%d",&size);
    printf("\n");
    pattern1(size);
    printf("\n");
    pattern2(size);
    printf("\n");
    pattern5(size);
    printf("\n");
    pattern3(size);
    printf("\n");
    pattern4(size);
    
}