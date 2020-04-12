#include<stdio.h>
#include<stdbool.h>

int n;

int recursiveSum(int sum,int count){
    int reader;
    if(count>0){
        printf("Enter number %d : ",n+1-count);
        scanf("%d",&reader);
        return recursiveSum(sum+reader,count-=1);
    }
    else{return sum;}
}

void main(){
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    printf("sum of all %d numbers is %d",n,recursiveSum(0,n));
}