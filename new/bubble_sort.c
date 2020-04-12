
#include<stdio.h>
#include<stdbool.h>

void bubbleSort(int arr[], int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void main(){
    int size,item;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    bubbleSort(array,size);
    printf("Array elements after sorting are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
}