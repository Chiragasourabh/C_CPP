
#include<stdio.h>
#include<stdbool.h>

int binarySearch(int arr[], int left, int right, int item){
    int mid = (left+right)/2;
    printf("left: %d, right: %d, mid: %d. \n",left,right,mid);
    if(arr[mid] == item){return mid;}
    else if(left>=right){return -1;}
    else if (arr[mid]>item){return binarySearch(arr, left, mid-1, item);}
    else if (arr[mid]<item){return binarySearch(arr, mid+1, right, item);}
}

void main(){
    int size,item;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements in order.\n",size);
    for(int i=0;i<size;i++){scanf("%d",&array[i]);}
    printf("Enter the element to search : ");
    scanf("%d",&item);
    int index = binarySearch(array,0,size-1,item);
    index>=0 ? printf("Element %d is found at position(0 indexing) %d .",item,index) : printf("Element %d is not found.",item);
}