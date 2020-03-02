#include<stdio.h>
int main()
{
    int t;
    long long int a,b,c,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lli %lli %lli",&a,&b,&c);
        for(i=a;i<=b;i++)
        {
            if(i%c==0)
            {
                printf("%lld\n",i);
            }
        }
    }
    return 0;
}
