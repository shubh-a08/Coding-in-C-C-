#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    for(b=1;b<10;b++){
        printf("%d X 0%d = %d\n",a,b,a*b);
        if(b==9) printf("%d X 10 = %d\n",a,a*10);
    }
}