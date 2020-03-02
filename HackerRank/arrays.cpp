#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,a[10000],j;

    cin>>n;
     for(i=1;i<=n;i++){
        cin>>a[i];
     }
     for(j=n;j>0;j--){
        cout<<a[j]<<" ";
     }
    return 0;
}
