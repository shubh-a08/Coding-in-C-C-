#include<stdio.h>
//it does not use the compund interest formula as it requires to use math library
int main(){
    int i,a,b,c,d,g;
    float e,f;
    printf("Which Converter do you require : \n");
    printf("1. Simple Interst\n");
    printf("2. Compund Interst\n");
    printf("Put the option value : ");
    scanf("%d",&i);
    if(i == 1){
        printf("***************************For Simple Interest***********************\n");
        printf("Give the Principal Amount : ");
        scanf("%d",&a);
        printf("Give the Rate of Interest : ");
        scanf("%d",&b);
        b = b/100;
        printf("Give the time period : ");
        scanf("%d",&d);
        e = a*b*d;
        f = e/100;
        printf("The value of total amount paid by : %lf",f);
}
    if(i==2){ 
        printf("***************************For Compound Interest ***********************\n");
        printf("Give the Principal Amount : ");
        scanf("%d",&a);
        printf("Give the Rate of Interest : ");
        scanf("%d",&b);
        b = b/100;
        printf("Give the Number of time the interest is applied : ");
        scanf("%d",&c);
        printf("Give the time period : ");
        scanf("%d",&d);
        f = b/c;
        g = c*d;
        // e = a*((1+f)g);
        printf("The value of total amount paid by : %lf",e);
        }
}