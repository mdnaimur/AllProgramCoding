#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
  int t,n,k,counts=0,i,j;
  cin>>t;
  while(t--){
    cin>>n>>k;
    if(((k-1)|k)>n&&k%2==0)
    {
        cout<<k-2<<endl;
    }
    else{
        cout<<k-1<<endl;
    }
  }
 return 0;
}
