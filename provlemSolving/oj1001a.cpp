#include<iostream>
using namespace std;

int main()
{
    int t,m,n,d,s;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=0 && n<=20)
        {
            m=n%2;

            d=n/2;
            s=m+d;
            cout<<d<<" "<<s<<endl;
        }
    }
    return 0;
}
