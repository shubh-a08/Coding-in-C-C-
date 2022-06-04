// 9
// 87
// 654
// 3210

#include<stdio.h>
int main(){
    int a,b,c,d;
    d = 9;
    for(a=0;a<5;a++){
        for(b=0;b<a&&d>=0;b++,d--){
            printf("%d",d);
        } 
    printf("\n");
    }
}





