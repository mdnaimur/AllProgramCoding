#include<stdio.h>
int gcd(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int a,b,t,result;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        result=(a*b)/(gcd(a,b));

        printf("LCD = %d\n",result);
    }
    return 0;
}
