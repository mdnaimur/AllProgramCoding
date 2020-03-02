#include<stdio.h>
int main()
{
    int ara[10002];
    int i,n,num,missing;
    scanf("%d",&n);
    for(i=1;i<=n;i++)

        ara[i]=0;

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&num);
        ara[num]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]==0)
        {
            missing=i;
            break;
        }
    }
    printf("Missing number : %d\n",missing);
    return 0;
}
