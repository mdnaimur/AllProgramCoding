#include<iostream>
#include<string>
using namespace std;

int main()
{
    char cha;
    int t,val;
    cin>>t;

    while(t--)
    {

        cin>>cha;
        val=cha;
        if(val>='a' && val<='z')
           {
            cout<<"lowercase character"<<endl;
           }
            else if(val>='A' && val<='Z')
            {
                cout<<"uppercase character"<<endl;
            }
            else if(val>='0' && val<='9')
                {

                cout<<"Numerical Digit"<<endl;
            }
            else{

                cout<<"Spacial character"<<endl;
            }
    }
    return 0;

    }
