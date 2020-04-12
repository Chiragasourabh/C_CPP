#include <stdio.h>
 
long factorial(int n){
    if(n==0){return 1;}
    else{return n*factorial(n-1);}
}

void main()
{
    int i, n, c;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(c=0;c<=(n-i-2);c++)
            printf(" ");
    for(c=0;c<=i;c++)
        printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
    printf("\n");
    }
    return 0;
}
 

