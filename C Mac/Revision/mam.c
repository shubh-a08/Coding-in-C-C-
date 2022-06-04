#include<stdio.h>
#include<math.h>

// 2   3   4   5   6
// 4   9   16  25  36
// 8   27  64  125 216

// 10     11     100     101     110
// 100    1001   10000   11001   100100       

long int bin(int i){
    long int ans=0;
    int b,c= 0;
    for(;i>0;i=i>>1,c++){
        b=i&1;
        ans = ans+b*pow(10,c);
    }
    return ans;
}


int main(){
    int a,b,c,d,f;
    long int g;
    for(a = 1;a<20;a++){
    }
    for(a=1;a<6;a++){
        for(b=2;b<11;b++){
            int e = 19;
            f = (int)pow(b,a);
            printf("%d",f);
            c=0;
            for(;f>0;f=f/10)c++;
            if(c>1) e-=c-1;
            for(f=0;f<e;f++) printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n\n\n");
    for(a=1;a<6;a++){
        for(b=2;b<11;b++){
            int e = 17;
            f = (int)pow(b,a);
            g=bin(f);
            printf("%ld",g);
            c=0;
            for(;g>0;g=g/10)c++;
            if(c>2^c>5) e-=c/1.5-1;
            else if(c>5) e-=c/1.5;
            for(g=0;g<e;g++) printf(" ");
        }
        printf("\n");
    }

}