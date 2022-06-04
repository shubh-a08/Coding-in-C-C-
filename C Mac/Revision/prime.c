#include<stdio.h>
int main(){
    int a,b,c=0,d,temp;
    for(a=10;a<401;a++){
        c=0;
        temp = a;
        for(b=2;b<temp;b++){
            if(temp%b==0){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%d\n",a);
        }
    }
}