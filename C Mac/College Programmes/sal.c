#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Provide the basic salary : ");
    scanf("%d",&d);
    a = 0.4*d;
    b = 0.2*d;
    c = d+a+b;
    printf("The basic salary of emp is given by : %d",c);

}