#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(k=4-i;k>=1;k--)
        printf(" ");

        for(j=1;j<=4;j++)
        printf("*");

        for(l=2;l<=i;l++)
        printf("*");

        printf("\n");
    }
}