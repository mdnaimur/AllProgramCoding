#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

vector<int> alice,boob;
int i,adata,bdata,a=0,b=0;

for(i=0;i<3;i++)
{
    cin>>adata;
    alice.push_back(adata);
    cin>>bdata;
    boob.push_back(bdata);
}
for(i=0;i<3;i++)
{
    if(alice[i]>boob[i]) a++;
    else if(boob[i]>alice[i])b++;

}
cout<<a<<" "<<b;

return 0;

}
