
#include<stdio.h>

void main(){
    int number,counter=0;
    printf("Enter number of rows : ");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",++counter);
        }
        printf("\n");
    }
}