
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int number){
    int c;
    for(c=2;c<=number/2;c++){
        if(number%c==0){
            return false;
        }
    }
    if(c==(number/2)+1){return true;}
}

void main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    isPrime(number) ? printf("%d is a prime number",number) : printf("%d is not a prime number",number);
}