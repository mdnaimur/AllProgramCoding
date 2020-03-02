#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,t;
  cin>>j;
 while(j--)
  {
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {

        for(t=1;t<=i;t++)
        {
            cout<<m;
            cout<<" ";
        }
  cout<<endl;

    }
    for(i=n-1;i>0;i--)
    {
        for(t=i;t>0;t--)
        {
            cout<<m;
            cout<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}
