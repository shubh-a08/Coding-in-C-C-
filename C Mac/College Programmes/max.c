#include<stdio.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b,c;
    printf("Give the numbers for comparison : \n");
    scanf("%d%d",&a,&b);
    c = max(a,b);
    printf("The max is %d",c);


}