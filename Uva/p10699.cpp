#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,j,isprime,k;

    while(true)
    {
        cin>>n;
        if(n==0) break;
           k=0;
           for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){
                isprime =1;
                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        isprime=0;
                        break;
                    }
                }
                if(isprime==1)
                {
                   k++;
                }
            }

        }
        cout<<k<<endl;
    }

    return 0;
}
