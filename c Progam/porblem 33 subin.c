#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=a;i<=b;i=i+c);
        {
                printf("%d\n",i);

        }

    }

return 0;
}
