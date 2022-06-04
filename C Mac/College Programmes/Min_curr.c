#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,j,i;
    printf("Provide the value of money to be carried : ");
    scanf("%d",&i);
    a = i/2000;
    i  = i -(a*2000);
    b = i/500;
    i  = i -(b*500);
    c = i/200;
    i  = i -(c*200);
    d = i/100;
    i  = i -(d*100);
    e = i/50;
    i  = i -(e*50);
    f = i/20;
    i  = i -(f*20);
    g = i/10;
    i  = i -(g*10);
    h = i/5;
    i = i-(h*5);

    printf("The number of 2000 Rupees notes required are : %d\n",a);
    printf("The number of 500 Rupees notes required are : %d\n",b);
    printf("The number of 200 Rupees notes required are : %d\n",c);
    printf("The number of 100 Rupees notes required are : %d\n",d);
    printf("The number of 50 Rupees notes required are : %d\n",e);
    printf("The number of 20 Rupees notes required are : %d\n",f);
    printf("The number of 10 Rupees notes required are : %d\n",g);
    printf("The number of 5 Rupees notes required are : %d\n",h);
    printf("The number of 1 Rupees notes required are : %d\n",i);


}