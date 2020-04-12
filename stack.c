#include <stdio.h>
#include <stdbool.h> 

int main() {
    printf("Enter the size of array : ");
    int ch, size, top=0;
    scanf("%d",&size);
    printf("%d",size);
    int array[size];
    bool repeatOperation = true;
    do{
        printf("\n\nEnter the operation No:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter the option : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                {
                    if(top>=size){
                        printf("Failed ---> Overflow");
                    }
                    else{
                        scanf("%d",&array[top++]);
                        printf("inserted Successfully");
                    }
                    break;
                }
            case 2:
                {
                    if (top==0){
                        printf("Failed ---> Underflow");
                    }
                    else{
                        printf("Deleted item is %d",array[--top]);
                        array[top]=NULL;
                    }
                    break;
                }
            case 3:
                {
                    if(top==0){
                        printf("Underflow");
                    }
                    else{
                        printf("Elements are : ");
                        for(int i=top-1;i>=0;i--){
                            printf("%d ",array[i]);
                        }
                    }
                    break;
                }
            case 4:
                {
                    repeatOperation = false;
                    break;
                }
            default :
                printf("Invalid Option");
                break;
        }
    }while(repeatOperation);
}