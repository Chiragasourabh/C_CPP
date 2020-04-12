
#include<stdio.h>
#include<stdbool.h>


void concatinate(char con[], char s1[], char s2[]){
    int mainindex = 0,inindex=0;
    while(s1[inindex]!='\0'){
        con[mainindex]=s1[inindex];
        inindex++;
        mainindex++;
    }
    inindex=0;
    while(s2[inindex]!='\0'){
        con[mainindex]=s2[inindex];
        inindex++;
        mainindex++;
    }
    s2[mainindex]='\0';
}

void main(){
    char s1[100], s2[100], concatinated[200];
    printf("Enter string 1 : ");
    gets(s1);
    printf("Enter string 2 : ");
    gets(s2);
    concatinate(concatinated,s1,s2);
    printf("Concatinated string : %s",concatinated);
}