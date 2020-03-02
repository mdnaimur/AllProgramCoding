#include<stdio.h>
int main()
{
    int n,m,a,b,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=n;
        a=0;
        while(m>0)
        {
            a+=m%2;
            m/=2;
        }

        b=0;
        while(n>0)
        {
            i=n%10;
            if(i==1||i==2||i==4||i==8)
                b++;
            else if(i==3||i==5||i==6||i==9)
                b+=2;
            else if(i==7)
                b+=3;
            n/=10;
            printf("n is: %d and b is : %d \n",n,b);
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
