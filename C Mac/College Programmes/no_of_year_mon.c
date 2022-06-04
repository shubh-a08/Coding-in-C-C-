#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Give the days to calculate : ");
    scanf("%d",&a);
    b = a/365;
    a = a-(b*365);
    c = a/30;
    a = a-(c*30);
    d = a;
    printf("The number of years are : %d\n",b);
    printf("The number of months are : %d\n",c);
    printf("The number of days are : %d\n",d);

}