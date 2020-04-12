
#include<stdio.h>
#include<stdbool.h>

void insertAtPosition(int arr[], int *size, int pos, int item){
    for(int i= *size;i>pos;i--){arr[i]=arr[i-1];}
    arr[pos]=item;
    *size+=1;
}

int main(){
    int size,item,position;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[100];
    printf("Enter %d array elements .\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("Enter the item to insert : ");
    scanf("%d",&item);
    printf("Enter the position to insert(0 indexing) : ");
    scanf("%d",&position);
    if(position<0 || position>size){printf("Cannot insert at index %d. exiting....",position); return 0;}
    insertAtPosition(array,&size,position,item);
    printf("Array elements after inserting are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
    return 0;
}