#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int sum=0;
    va_list argPtr;
    va_start(argPtr, count);
    for(int i=0;i<count;i++){
        sum+=va_arg(argPtr, int);
    }
    va_end(argPtr);
    return sum;
}

int min(int count,...) {
    int min=MAX_ELEMENT;
    va_list argPtr;
    va_start(argPtr, count);
    for(int i=0;i<count;i++){
        int item = va_arg(argPtr, int);
        if(item<min){min=item;}
    }
    va_end(argPtr);
    return sum;
    return min;
}

int max(int count,...) {
    int max=MIN_ELEMENT;
    va_list argPtr;
    va_start(argPtr, count);
    for(int i=0;i<count;i++){
        if(va_arg(argPtr, int)>max){
            max = va_arg(argPtr, int);
        }
    }
    va_end(argPtr);
    return max;
}

int main(){
    int sm = max(3,170260,308387,292173);
    printf("%d",sm);
    return 0;
}