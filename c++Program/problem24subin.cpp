#include<iostream>
using namespace std;

int main()
{
    int num[10001],i,j,n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i=0;i<n;i+=2)
        {
            cout<<num[i];
             cout<<" ";

        }
        cout<<endl;

    }
    return 0;
}
