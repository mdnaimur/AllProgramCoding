#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,n,arra[20],i;
    int prv,currt;
    int j;

        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        prv=arra[0];
        for(i=0;i<n;i++)
        {
            currt=arra[i];
            if(currt>=prv)
            {
                prv=currt;
            }
            else{
                break;
            }
        }

            if(currt>=prv)
            {
                cout<<"YES"<<endl;
            }
            else{

                cout<<"NO"<<endl;
            }


        return 0;

    }

