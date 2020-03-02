#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,val;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        val=1;
        for(k=0;k<=i;k++)
        {
           // cout<<" First value is " <<val<<endl;
           // val = val * (i - k) / (k + 1);
           // cout<<" After formula : " <<val<<endl;
            cout<<" value of |i| =" <<i<<" --> value of |k| = "<<k<<endl;
        }
        cout<<endl;

    }

    return 0;
}
