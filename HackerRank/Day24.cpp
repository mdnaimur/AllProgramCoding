#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,j=0,k;
    cin>>k;

    while(k--){
        cin>>n;
        for(i=2;i<=n;i++){
        if(n%i==0){
       cout<<"Not prime"<<endl;
    break;
        }
        else {
            cout<<"Prime"<<endl;
            break;
        }
    }

    }


    return 0;
}
