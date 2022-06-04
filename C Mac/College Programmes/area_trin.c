#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float d,e;
    printf("The sides of triangle is given by : ");
    scanf("%d%d%d",&a,&b,&c);
    d = (a+b+c)/2;
    e = sqrt(d*(d-a)*(d-b)*(d-c));
    printf("The ares of triangle : %f",e);


    
}