#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Give the 3 digit number : ");
    scanf("%d",&d);
    a = d/100;
    b = (d-a*100)/10;
    c = (d-a*100-b*10);
    e = a+b+c;
    printf("%d",e);
}