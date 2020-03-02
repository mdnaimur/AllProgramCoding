#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,c,b,p,area;
    cout<<"Enter the the triangle value"<<endl;
    cout<<"Fist Value: ";
    cin>>a;
    cout<<"Fist value is: "<<a<<endl;
    cout<<"Second Value: ";
    cin>>b;
    cout<<"Second Value is: "<<b<<endl;
    cout<<"Third Value: ";
    cin>>c;
    cout<<"Third Value is: "<<c<<endl;
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"\nTriangle Area is : "<<area<<endl;
return 0;
}
