#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,sum,tem;

    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        tem=n;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
            printf("Sum is n(%d)Modi(%d) = %d\n",n,i,sum );
        }

        if(tem==sum)
        {
             printf("YES, %d is a perfect number!\n",tem);
        }
        else{
            printf("No, %d is not a perfect number!\n",tem);

        }
    }
    return 0;
}
