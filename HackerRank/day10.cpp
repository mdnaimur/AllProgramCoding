#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int i,n,k,c=0,l=0;
    cin>>n;
    while(n>0){
        k=n%2;
        n=n/2;
          cout<<k;
          if(k==1){
            c++;
            if(c>=l){
                l=c;
            }
          }
          else{c=0;}
    }
    cout<<"\n"<<l<<endl;


    return 0;
}
