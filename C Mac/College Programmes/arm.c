#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
//     for(a=0;a<100;a++){
//         d = a;
//     for(c=0;a>0;a=a/10)
//         {
//             b = a%10;
//             c = c+(b*b*b);
//         }}
// if(c==d)
// printf("%d",c);
// printf("%d",a);

    // int a,b,c,d;
    // for(a=1;a<1000;a++){
    //     d = a;
    //     c = 0;
    //     for(;a>0;a =a/10){
    //         b = a%10;
    //         c = c+(b*b*b);
    //     }
    //     if(c==d) printf("%d\n",c);
    // }

//correct code
    // scanf("%d",&a);
    // d = a;
    // for(b=0;a>0;b++) a=a/10;
    // a = d;
    // for(c=0;a>0;a=a/10){
    //     e = a%10;
    //     c = c+pow(e,b);
    // }
    // if(d==c) printf("Yes");
    // else printf("No");


    for(a=1;a<1000000000;a++){
    d = a;
    for(b=0;a>0;b++) a=a/10;
    a = d;
    for(c=0;a>0;a=a/10){
        e = a%10;
        c = c+pow(e,b);
    }
    if(d==c) printf("%d\n",d);
    // else printf("No");
    a = d;
    }
}