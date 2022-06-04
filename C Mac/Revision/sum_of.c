#include<stdio.h>
int main(){
    int a,b,sum=0;
    for(b=0;b<5;b++){
        scanf("%d",&a);
        if(a>=0){
            sum = sum+a;
        }
    }
    printf("%d",sum);
}