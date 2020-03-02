#include<iostream>

#include<math.h>
using namespace std;
int main() 
{ 
double num,ans,root; 
 
cout <<"Enter any Num: "<<endl; 
cin>>num; 
cout<<"Enter the value of root: ";
cin>>root;
ans=pow(num,1/root);
cout<<"\n Squre of "<<num<<" is: "<<ans; 

return 0;
} 
