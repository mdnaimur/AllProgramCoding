#include<bits/stdc++.h>
using namespace std;

int main(){

 int a,b;
int t,sum=0,con=1;
cin>>t;
while(t--)
{
    cin>>a>>b;
    if((a <=10 )&& (b<=10))
    {
        sum=a+b;
        cout<<"Case "<<con<<": "<<sum<<endl;
        con++;
    }
}

return 0;
}
