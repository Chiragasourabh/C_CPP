#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,sum=0;
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    printf("%d",sum);
    return 0;
}

