#include<stdio.h>

int main()
{
    int a[2][3];
    int r,c;

     for(r=0;r<=1;r++)
    {

        for(c=0;c<=2;c++)
           scanf("%d",&a[r][c]);
    }
    for(r=0;r<=1;r++)
    {

        for(c=0;c<=2;c++)
            printf("%d\t",a[r][c]);
            printf("\n");
    }
    return 0;
}
