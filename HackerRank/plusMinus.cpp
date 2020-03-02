#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

int i,no,j;
float p=0,n=0,z=0;
 float positive,negative,zero;
 cin>>no;
  vector <int> arr(no);
 for(i=0;i<no;i++)
 {
     cin>>arr[i];
 }
 for(i=0;i<no;i++)
{
    if(arr[i]==0){ z++;}
   if(arr[i]>0) {p++;}
   if(arr[i]<0) {n++;}
}/*
cout<<endl<<"geting value is"<<endl;
cout<<p<<endl<<n<<endl<<z<<endl;
positive= p/no;
negative=n/no;
zero = z/no;


cout<<endl;*/
cout.precision(6);
cout<<p/no<<endl;
cout<<n/no<<endl;
cout<<z/no<<endl;
//cout<<positive<<endl<<negative<<endl<<zero<<endl;

}
