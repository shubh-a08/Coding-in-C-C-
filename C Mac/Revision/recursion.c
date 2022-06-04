#include<stdio.h>
void fib(int a,int b,int c){
    int d;
    d = b+c;
    c = b;
    b = d;
    printf("%d\n",b);
    a--;
    if(c<a) fib(a,b,c);
}
void fac(int a, int b){
    b = b*a;
    a = a-1;
    if(a>0) fac(a,b);
    else printf("%d",b);

}


int main(){
    int a;
    scanf("%d",&a);
    // fib(a,0,1);
    fac(a,1);
}