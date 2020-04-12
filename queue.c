#include <stdio.h>
#include <stdbool.h>

void main(){
    int size,rear=0,ch;
    printf("\nplease enter Queue size : ");
    scanf("%d",&size);
    int array[size];
    bool repeat=true;
    do{
        printf("\nChoices are:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            {
                if(rear>=size){
                    printf("Error --> Overflow");
                }
                else{
                    printf("Enter the element to insert : ");
                    scanf("%d",&array[rear++]);
                }
                break;
            }
            case 2:
            {
                if(rear==0){
                    printf("Error --> Empty Nothing to Delete");
                }
                else{
                    printf("Item Deleted is : %d",array[0]);
                    for(int i=0;i<rear;i++){
                        array[i]=array[i+1];
                    }
                    rear--;
                }
                break;
            }
            case 3:
            {
                if(rear == 0){
                    printf("Error --> Empty");
                }
                else{
                    printf("Queue items are : ");
                    for(int i=rear-1;i>=0;i--){
                        printf(" %d ",array[i]);
                    }
                }
                break;
            }
            case 4:
                repeat = false;
                break;

            default:
                printf("Wrong Choice");
                break;
        }
    }while(repeat);

}