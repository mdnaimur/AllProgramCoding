#include<iostream>
#include<math.h>
#define size 100001
char ara[size];
using namespace std;
void sieve()
{
    int i,j,root;
    for(i=2;i<size;i++)
    {
        ara[i]=1;
    }
    root=sqrt(size);
    for(i=2;i<root;i++)
    {
        if(ara[i]==1)
        {
            for(j=2;i*j<=size;j++)
            {
                ara[i*j]=0;
            }
        }
    }
}
int main()
{
    int t,a,b,Count,i;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        Count=0;
        for(i=a;i<=b;i++)
        {
            if(ara[i])
            {
                Count++;
            }
        }
        cout<<Count<<endl;
    }

    return 0;
}
