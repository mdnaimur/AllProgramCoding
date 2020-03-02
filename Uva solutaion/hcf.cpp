#include<iostream>
using namespace std;
int main()
{
    int i,a,b,hfc;
    cout<<"Enter the First number : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the second number : ";
    cin>>b;
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
              hfc=i;
        }

    }
    cout<<"The highest common factor is : "<<hfc<<endl;
    return 0;

}
