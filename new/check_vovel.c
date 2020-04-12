
#include<stdio.h>
#include<stdbool.h>

bool isVovel(char ch){
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){return true;}
    else{return false;}
}

char * map(bool b){
    if(b){return "voval";}
    else{return "not a voval";}
}

void main(){
    char ch,op;
    do{
        printf("\nCheck Vovel\nEnter character : ");
        scanf("\n%c",&ch);
        printf("character %c is %c.\n",ch,map(isVovel(ch)));
        printf("do you want to repeat ?(Y/n) : ");
        scanf("\n%c",&op);
        if(op=='y'||op=='Y'){continue;}
        else{break;}
    }while(true);
}