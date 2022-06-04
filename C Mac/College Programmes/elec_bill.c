#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Provide the value for the consumed units : ");
    scanf("%d",&a);
    e = 0;
    if(a<=50){
        e = a*0.5;
        printf("IN1 %d",e);

    }
    else if(a<=150){
        e = 25+0.75*(a-50);
        printf("IN2 %d",e);
    }
    else if(a<=250){
        e = 100+1.2*(a-150);
        printf("IN3 %d",e);

    }
    else if(a<=500){
        e = 220+1.5*(a-250);
        printf("IN4 %d",e);

    }
    e  = e+e*0.2;
    printf("The amount to be paid is : %d",e);
}