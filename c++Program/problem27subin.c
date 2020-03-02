#include<stdio.h>
int main()
{
    int n,t,tem=0,rem,rev;
    scanf("%d",&t);
    while(t--)
    {
        rev=0;
        scanf("%d",&n);
        tem=n;
        while(n!=0)
        {
            rem=(n%10);
            rev+=(rem*rem*rem);
            n/=10;
        }
        if(tem==rev)
        {
            printf("%d is an armstrong number !\n",tem);
        }
        else
        {
            printf("%d is not armstrong number !\n",tem);
        }
    }

    return 0;
}
