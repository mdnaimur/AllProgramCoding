#include<stdio.h>
int main()
{
    int arr1[20][20],t,i,j;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
