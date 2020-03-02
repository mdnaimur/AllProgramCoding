#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
    int y;
    string m="09";
    cin>>y;
    if(y==1918)  cout<<"26.09.1918"<<endl;
   else if((y%4==0)&&(y%100!=0||y%400==0||y<1918))
    {
        cout<<256-244<<"."<<m<<"."<<y<<endl;
    }
    else
    {
         cout<<256-243<<"."<<m<<"."<<y<<endl;
    }
return 0;
}
