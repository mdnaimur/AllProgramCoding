#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,t,found;
    int ara[200];

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n-1;i++)
        {
            cin>>ara[i];
        }
        for(i=1;i<=n;i++)
        {
            found=0;
            for(j=0;j<n-1;j++)
            {
                if(i==ara[j])
                {
                    found=true;
                }
            }
            if(found==false)
            {
                cout<<"Missing number is "<<i<<endl;
            }
        }
    }
    return 0;
}
