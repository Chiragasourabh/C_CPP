#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int size,half;
    printf("Enter the size(odd number only) : ");
    scanf("%d",&size);
    half=(size/2);
    // if(size%2==0){printf("number is not odd");return 0;}
    for(int i=0; i<size+1; i++){
        for(int j=0; j<size+1; j++){
            if(i<half){(j>=half+i || j<=half-i) ? printf("*") : printf(" ");} 
            else{((j>=half+(half-(i-half)) || j<=i-half)) ? printf("*") : printf(" ");}
        }
        printf("\n");
    }
}   