#include<stdio.h>
int main()
{
    int T,i;
   unsigned long x,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%li %li",&x,&N);

       if(x<N)
        {
             for(i=x;i<=N;i+=x)
            {
                  printf("%d\n",i);
            }
          }
        else {
             printf("Invalid\n");
        }
    }
    return 0;
}
