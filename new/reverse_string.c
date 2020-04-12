
#include<stdio.h>
#include<stdbool.h>

int stringLength(char s[]){
    int c=0;
    while(s[c]!='\0'){c++;}
    return c;
}

void reverseString(char s1[]){
    int i,j,temp;
    for(i=0, j=stringLength(s1)-1;i<j;i++,j--){
        temp = s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
}

void main(){
    char s1[100];
    printf("Enter string : ");
    gets(s1);
    reverseString(s1);
    printf("Reversed string : %s",s1);
}