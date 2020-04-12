#include <stdio.h>
float area(a,b,c){
    double p = (a+b+c)/2.0;
    printf("%f\n",p);
    double pma=p-a,pmb=p-b,pmc=p-c;
    printf("%f %f %f\n",pma,pmb,pmc);
    double sm = p*pma*pmb*pmc;
    printf("%f\n",sm);
    return sqrt(sm);
}
void main(){
    int a = 22,b=18,c=5;
    printf("%f",area(a,b,c));
    
}