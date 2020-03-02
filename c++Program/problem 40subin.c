#include<stdio.h>
int main()
{
    int k,t,x,sum,power,i;

    scanf("%d",&t);
    while(t--)
    {
        sum =1;
        power=1;
        scanf("%d %d",&x,&k);
        for( i=1;i<=k;i++)
        {
            power=power*x;
            sum=sum+power;
            printf("powwer is %d\n",power);

        }
        printf("Result = %d\n",sum);
    }

    return 0;
}
