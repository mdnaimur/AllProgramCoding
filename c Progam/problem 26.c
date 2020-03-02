#include<stdio.h>

int main()
{
    int t,Count;
    double n;
    scanf("%d",&t);
    while(t--)
    {
        Count=0;
        scanf("%lf",&n);

        while(n>=1.0)
        {
            n=n/2;
            Count++;
        }
        printf("%d days\n",Count);
    }
    return 0;
}
