#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int start=0;
    for(int i=0;i<strlen(s)+1;i++){
        if(s[i]==' ' || s[i]=='\0'){
            printf("%.*s\n",i-start+1,(s+start));
            start=i+1;
        }
    }
    return 0;
}