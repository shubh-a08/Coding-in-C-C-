//     *
//    ***
//   *****
//  *******
// *********



#include<stdio.h>
int main(){
    int i,a,b,c,d,h1,h2;
    scanf("%d",&i);
    for(a=0;a<i;a++){
        for(b=0;b<i-a;b++){
            printf(" ");
        }
        for(b=(a*2)+1;b>0;b--){
            printf("*");
        }
        printf("\n");
    }
}