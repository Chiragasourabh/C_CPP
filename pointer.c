#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function  
    // printf("%d",*a);
    // printf("%d",*b);  
    int sum = *a+*b, diff = abs(*a-*b);
    *a=sum;
    *b=diff;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}