#include<stdio.h>
int main(){
    int a,b,c,d,temp;
    for(a=10;a<401;a++){
        temp = a;
        for(b=0;temp>0;temp=temp/10){
            c = temp%10;
            b = b+(c*c*c);
        }
        if(b==a) printf("%d\n",a);
    }
}