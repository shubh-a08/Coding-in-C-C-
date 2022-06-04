#include<stdio.h>
int fac(int a){
    int b=1;
    for(;a>0;a--){
        b=b*a;
    }
    return b;
}
int main(){
    int n;
    float b,e;
    scanf("%d",&n);
    e = 0;
    for(float a = 1.0;a<n;a++){
        b = a/fac(a+1);
        e = e+b;
    }
    printf("%f\n",e);
}