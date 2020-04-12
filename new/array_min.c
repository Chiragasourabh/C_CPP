
#include<stdio.h>
#include<stdbool.h>

int max(int arr[], int size){
    int min = 99999999;
    for(int i=0;i<size;i++){
        if(arr[i]<min){min=arr[i];}
    }
    return min;
}

void main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("min element is %d .",max(array,size));
}