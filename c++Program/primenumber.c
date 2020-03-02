#include<stdio.h>
int main()
{
    int prime[10001];
int i,n,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        prime[i]=1;
    }
    //prime[0]=0;
  //  prime[1]=0;
    for(i=2;i<=n;i++)
    {
        if(prime[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                prime[i*j]=0;
                break;
            }
        }


    }

    if(prime[i]==1)
    {
        printf("%d is a prime number  \n",n);
    }
    else{
        printf("%d is not prime number\n",n);
    }

    return 0;
}
