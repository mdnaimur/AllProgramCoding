#include<iostream>
using namespace std;
int main()
{
    int t,n,res,rem,templ;

    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        templ=n;

        while(n!=0)
        {
            rem=n%10;
            res+=(rem*rem*rem);
            n/=10;
        }
        if(res==templ)
        {
            cout<<templ<<" is an armstrong number!"<<endl;
        }
        else{
            cout<<templ<<" is not an armstrong number!"<<endl;
        }
    }

    return 0;
}
