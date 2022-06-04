#include<stdio.h>

int main(){
    char a;
    int c,b;
    printf("Input the numbers :\n");
    scanf("%d%d",&b,&c);
    printf("Operations : +,-,*,/\n");
    scanf("%c",&a);
    switch(a){
        case '+':
        printf("%d",c+b);
        break;
        case '-':
        printf("%d",b-c);
        break;
        case '*':
        printf("%d",b*c);
        break;
        case '/':
        printf("%d",b/c);
        break;
        default:
        printf("Invalid Input. ");
    }

}