#include<stdio.h>

int main(){
    int a = 12;
    int b = 13;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d\n",a);
    printf("%d\n",b);

}