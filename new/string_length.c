
#include<stdio.h>
#include<stdbool.h>

int stringLength(char s[]){
    int c=0;
    while(s[c]!='\0'){c++;}
    return c;
}

void main(){
    char s[100];
    printf("Enter string : ");
    gets(s);
    printf("length of string '%s' is %d.",s,stringLength(s)); 
}