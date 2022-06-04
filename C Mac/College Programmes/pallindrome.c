#include<stdio.h>

int main(){
    int a,b,c,d;
    // scanf("%d",&a);
    // b = a;
    // for(d=0;a>0;a=a/10){
    //     c = a%10;
    //     d = d*10+c;
    // }
    // if(d==b) printf("Is pallindrome.");
    // else printf("Not a Pallindrome.");
    for(a=0;a<1000;a++){
        b = a;
        for(c=0;b>0;b/=10){
            d = b%10;
            c = c*10+(d);
        }
        if(c==a) printf("%d\n",c);
    }
}