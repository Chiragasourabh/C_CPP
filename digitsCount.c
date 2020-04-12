#include <stdio.h>

void main(){
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s",s);
    s = realloc(s, strlen(s) + 1);
    int out[10] ={0};
    for(int i=0;i<=strlen(s);i++){
        if(isdigit(s[i])){
            out[s[i]-'0']++; 
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d ",out[i]);
    }
}