#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,f,result,i;
    unsigned long sqr,animal,en;
    scanf("%d",&t);
    while(t--)
    {
        result=0;
        scanf("%d",&f);
        for(i=1;i<=f;i++)
        {
            scanf("%lu %lu %lu",&sqr,&animal,&en);

            result+=(sqr*en);
        }
        printf("%d\n",result);
    }

   return 0;
}
