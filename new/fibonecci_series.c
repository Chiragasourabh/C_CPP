
#include<stdio.h>
#include<stdbool.h>

int fibonecci(int count, int prev,int prev2){
    if(count>0){
        printf("%d ",prev+prev2);
        fibonecci(count-=1,prev+prev2,prev);
    }
}

void main(){
    int number;
    printf("Enter n > 2 : ");
    scanf("%d",&number);
    printf("1 2 ");
    fibonecci(number-2,2,1);
}