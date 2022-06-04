#include<stdio.h>
#include<math.h>

int main(){
    int a,c;
    float b;
    scanf("%d",&a);
    switch (a)
    {
    case 1975:
        printf("West Indies");
        break;
    case 1979:
        printf("West Indies");
        break;
    case 1983:
        printf("India");
        break;
    case 1987:
        printf("Australia");
        break;
    case 1992:
        printf("Pakistan");
        break;
    case 1996:
        printf("Sri lanka");
        break;
    case 1999:
        printf("Australia");
        break;

    default:
        if(1975<a&&a<1999){
            b = (a-1975)/4.0;
            b = round(b);
            c = 4*b+1975;
            switch (c)
            {
            case 1975:
                printf("West Indies");
                break;
            case 1979:
                printf("West Indies");
                break;
            case 1983:
                printf("India");
                break;
            case 1987:
                printf("Australia");
                break;
            case 1992:
                printf("Pakistan");
                break;
            case 1996:
                printf("Sri lanka");
                break;
            case 1999:
                printf("Australia");
                break;
            }
        }
        else{
            printf("Invalid input. ");
        }
        break;
    }
}