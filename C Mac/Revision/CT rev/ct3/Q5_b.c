#include<stdio.h>

int fact(int a){
    int f=1;
    for(;a>0;a--){
        f = f*a;
    }
    return f;
}
int main(){
    int i,c;
    float a,b,d;
    scanf("%d",&i);
    d = 0.0;
    for(a=1.0;a<i+1;a++){
        b = a/fact(a+1);
        d = d+b;
        printf("IN %f\n",b);
    }
    printf("\n\n\n\n\n\n");
    printf("%f",d);
}