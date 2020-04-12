
#include<stdio.h>
#include<stdbool.h>

void deleteFromPosition(int arr[], int *size, int pos){
    for(int i=pos; i<size-1; i++){arr[i]=arr[i+1];}
    *size-=1;
}

int main(){
    int size,item,position;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[100];
    printf("Enter %d array elements .\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("Enter the position to delete(0 indexing) : ");
    scanf("%d",&position);
    if(position<0 || position>=size){printf("Cannot delete at index %d. exiting....",position); return 0;}
    deleteFromPosition(array,&size,position);
    printf("Array elements after deleting are : ");
    for(int i=0;i<size;i++){printf("%d ",array[i]);}
    return 0;
}