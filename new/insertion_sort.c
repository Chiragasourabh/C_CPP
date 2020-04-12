
#include<stdio.h>
#include<stdbool.h>

int getPositionForInsertion(int arr[], int size, int item){
    int i;
    for(i=0;i<size;i++){if(arr[i]>item){return i;}}
    return i;
}

void insertionSort(int arr[], int size, int item){
    int position = getPositionForInsertion(arr,size,item);
    for(int i=size;i>=position;i--){arr[i+1]=arr[i];}
    arr[position] = item;
}

void main(){
    int size,item;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&item);
        insertionSort(array,i,item);
    }
    printf("Array elements after sorting are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
}