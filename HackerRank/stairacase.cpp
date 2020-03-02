#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;

    for(i=0;i<=n;i++)
    {
         for(k=1;k<=n-i;k++)
            {
            printf(" ");
            }
        for(j=0;j<i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";

    }
}
