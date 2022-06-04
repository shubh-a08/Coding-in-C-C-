/*
in<150000           --> no tax
150001<in<300000    -->0.1 tax
300001<in<500000    -->0.2 tax
500000<in           -->0.3 rax
*/

#include<stdio.h>

int main(){
    int in,a,b;
    scanf("%d",&in);
    if(in<150000) printf("No tax");
    else if(150001<in&&in<300000) a = in*0.1;
    else if(300001<in&&in<500000) a = in*0.2;
    else if(in>500000) a = in*03;
    else printf("Invalid input");
    b = in+a;
    printf("Payable Taxed Income is : %d",b);
}
