
#include<stdio.h>
#include<stdbool.h>

int max(int arr[], int size){
    int max = -99999999;
    for(int i=0;i<size;i++){
        if(arr[i]>max){max=arr[i];}
    }
    return max;
}

void main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("max element is %d .",max(array,size));
}