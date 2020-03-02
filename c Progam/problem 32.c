#include<stdio.h>
int main()
{
    int t,i,N,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&N);
        if(x<=N)
        {
             for(i=x;i<=N;i=i+x)
            {
                printf("%d\n",i);
            }
        }
        else{
            printf("Invalid!\n");
        }

    }
    return 0;
}
