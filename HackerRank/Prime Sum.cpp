#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    int Prime[n+1];
    int i,j;
    for(i=0;i<=n;i++)
        Prime[i]=1;
    Prime[0]=0;
    Prime[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(Prime[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                Prime[i*j]=0;
            }
        }
    }
    for(i=0;i<=n;i++)
    {

    if(Prime[i]==1)
       {
            cout<<i<<" ";

       }

    }

}

int main()
{
    int n,k,t;

    cin>>t;
    if(isPrime(t)==true)
        cout<<"This is Prime number";
    else
        cout<<"\n this is not prime"<<endl;
    /*while(t--)
    {
        cin>>n>>k;
        if(isPrime(n)==true && isPrime(k)==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }*/
    return 0;
}
