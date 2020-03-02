#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int i=0,d,n,s[32];

    cin>>n;
    while(n>0)
    {
        s[i]=n%2;
        n=n/2;
        i++;
    }
   for(i=i-1;i>=0;i--)
   {
       cout<<s[i];
   }
   cout<<endl;
    return 0;
}
