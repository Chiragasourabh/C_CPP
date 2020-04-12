#include<stdio.h>
#include<stdbool.h>

void main(){
    int original,n,r=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    original = n;
    while (n != 0)
    {
        r = r * 10;
        r = r + n%10;
        n = n/10;
    }
    original == r ? printf("number %d is a palindrome.",original) : printf("number %d is not a palindrome.",original);
}