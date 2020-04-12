
#include<stdio.h>
#include<stdbool.h>

void reverseArray(int arr[], int size){
    int temp;
    for(int i=0,j=size-1;i<j;i++,j--){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements .\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    reverseArray(array,size);
    printf("Array elements after reversing are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
}