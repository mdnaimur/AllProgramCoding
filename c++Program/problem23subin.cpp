#include<iostream>
#include<string>
using namespace std;

int main()
{
    char ch[100];
    int t,i;
     cin>>t;
    while(t--)
    {

    cin>>ch;

    for(i=0;i<=ch[i]!=0;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            cout<<int(ch[i]-64);
        }
    }
    cout<<"\n";
}
    return 0;
}
