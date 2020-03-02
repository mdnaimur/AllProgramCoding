#include<iostream>
using namespace std;
int main()
{
    int a,b,max,l=0,step;
    cout<<"Enter the fist number = ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the second number = ";
    cin>>b;
    if(a>b)
        max=step=a;
    else
        max=step=b;
    while(max!=1000)
    {
        if(max%a==0&&max%b==0)
        {
        l=max;
   // break;
    }
    max=max+step;

    }
    cout<<"LCM is "<<l<<endl;
    return 0;
}
