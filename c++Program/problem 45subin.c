#include<stdio.h>
int main()
{
    long long int pascal[52][52];
    int i,j,n;
    pascal[1][0]=1;
    pascal[2][0]=1;
    pascal[2][1]=1;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        pascal[i][0]=1;
    printf("    %lld",pascal[i][0]);
    printf("   ");
        for(j=1;j<i-1;j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
            printf("%lld",pascal[i][j]);
            printf("  ");
        }
    pascal[i][j]=1;
    printf("%lld",pascal[i][j]);
    printf("\n\n");
    }

return 0;
}
