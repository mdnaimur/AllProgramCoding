#include<stdio.h>
int main()
{
    int T,count=0;
    double f,ansC,d1,ansD,C,d;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf %lf",&C,&d);
        f=(9*C)/5+32+d;
        ansC=(5*f-160)/9;

         printf("Case %d: %.2lf\n",count+1,ansC);
         count++;
    }

    return 0;
    }
