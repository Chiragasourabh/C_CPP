
#include<stdio.h>
#include<stdbool.h>

bool compareString(char s1[], char s2[]){
    int index=0;
    while(s1[index]==s2[index]){
        if(s1[index]=='\0' || s2[index]=='\0'){break;}
        index++;
    }
    if(s1[index]=='\0' && s2[index]=='\0')
        return true;
    else
        return false;
}

void main(){
    char s1[100], s2[100];
    printf("Enter string 1 : ");
    gets(s1);
    printf("Enter string 2 : ");
    gets(s2);
    compareString(s1,s2) ? printf("string '%s' and '%s' are same.",s1,s2) : printf("string '%s' and '%s' are not same.",s1,s2);
}