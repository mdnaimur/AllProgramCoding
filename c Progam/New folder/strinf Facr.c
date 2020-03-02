#include<stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    unsigned long long f=1;
    for (i=1;i<=n;++i)
    {
        f=f*i;
    }
    printf("Fuction is %d \n",f);
    return f;
}
