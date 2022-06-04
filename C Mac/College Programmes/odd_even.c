#include<stdio.h>

int even(int a){
    if((a&1)==0) return 1;
    else return 0;
}

int main(){
    int a,b;
    printf("Provide number for comaprison :");
    scanf("%d",&a);
    b = even(a);
    if(b==1) printf("Even");
    else printf("Odd");
}