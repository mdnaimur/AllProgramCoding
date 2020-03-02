#include<iostream>
using namespace std;

int main()
{
    int cc,t;
    double n;
    cin>>t;
    while(t--)
    {
        cc=0;
        cin>>n;
        while(n>=1.0)
        {
            n=n/2;
            cc++;
        }
        cout<<cc<<" days"<<endl;
    }
    return 0;
}
