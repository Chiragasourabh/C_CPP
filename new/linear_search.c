
#include<stdio.h>
#include<stdbool.h>

int linearSearch(int arr[], int size, int item){
    for(int i=0;i<size;i++){
        if(arr[i]==item){return i;}
    }
    return -1;
}

void main(){
    int size,item;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements.\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("Enter the element to search : ");
    scanf("%d",&item);
    int index = linearSearch(array,size,item);
    index>=0 ? printf("Element %d is found at position(0 indexing) %d .",item,index) : printf("Element %d is not found.",item);
}