#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    int ara[30],array[20];
    printf("Enter the First Array Size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("\nOutput of first array : \n");
    for(i=0;i<n;i++)
    {
        printf("|%d|",ara[i]);
        printf("\t");
    }
    printf("\n\n");
printf("Enter the Second Array Size : ");

    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nOutput of second array : \n");

    for(i=1;i<=m;i++)
    {
        printf("|%d|",array[i]);

        printf("\t");
    }
    printf("\n\n");
    return 0;
}
