#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a = a+b;
    printf("Sum Greater than 0 : %i\n",(a>0));
    printf("Sum Equal to 0 : %i\n",(a==0));
    printf("Sum Less than 0 : %i\n",(a<0));


}