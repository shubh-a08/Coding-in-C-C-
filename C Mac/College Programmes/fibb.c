#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&c);
    printf("%d ",0);
    for(a = 0,b = 1;a<c;a=b,b=d){
        printf("%d ",d);
        d = a+b;
    }
}