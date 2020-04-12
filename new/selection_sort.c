
#include<stdio.h>
#include<stdbool.h>


void selectionSort(int arr[], int size){
    int pos,temp;
    for(int i=0;i<size-1;i++){
        pos=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[pos]){pos=j;}
        }
        if(pos!=i){
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
    }
}

void main(){
    int size,item;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    selectionSort(array,size);
    printf("Array elements after sorting are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
}