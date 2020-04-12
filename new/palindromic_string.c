
#include<stdio.h>
#include<stdbool.h>

int stringLength(char s[]){
    int c=0;
    while(s[c]!='\0'){c++;}
    return c;
}

bool checkPalindrome(char s1[]){
    int i,j;
    for(i=0, j=stringLength(s1)-1;i<j;i++,j--){
        if(s1[i]!=s1[j]){
            return false;
        }
    }
    return true;
}

void main(){
    char s1[100];
    printf("Enter string : ");
    gets(s1);
    checkPalindrome(s1) ? printf("string '%s' is a palindrome.",s1) : printf("string '%s' is not a palindrome.",s1);
}