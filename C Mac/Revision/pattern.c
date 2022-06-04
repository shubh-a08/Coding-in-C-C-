#include<stdio.h>
// 10
// 9 8
// 7 6 5
// 4 3 2 1

// 5 
// 4 3 
// 2 1 0
// 

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    d = a;
    for(b=0;b<a;b++){
        for(c=0;c<b;c++,d--){
            printf("%d ",d);
        }
        printf("\n");
        if(d<0) break;
    }
}