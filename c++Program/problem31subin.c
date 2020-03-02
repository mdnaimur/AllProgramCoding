#include<stdio.h>
#include<math.h>
int main()
{
    int i,t,num,n,srn,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(num=1;num<=n;n;um++)
        {
            sum=1;
            srn=sqrt(num);
            for(i=2;i<=srn;i++)
            {
                if(num%i==0)
                {
                    sum=sum+i+num/i;

                }

            }
             printf("tesing is num(%d)MOd i(%d) =%d \n",num,i,sum);
            if(sum==num)
            {
                printf("%d\n",num);
            }
        }
    }
    return 0;
}
