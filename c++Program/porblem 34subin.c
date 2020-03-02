#include<stdio.h>
int main()
{
    int i,t;
    long int a,b,c,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        for(j=1;j<=c;j+=a,j+=b)
        {
            if(j%a==0&&j%b==0)
            {
                printf("%ld\n",j);
            }
        }
    }
    return 0;
}
