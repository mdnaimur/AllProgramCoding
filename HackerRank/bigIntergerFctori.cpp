#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int f(int r)
{
   int i;
   int sum=1;
   for(i=1;i<=r;i++)
   {
       sum*=i;
   }
   return sum;
}
int main()
{
    int n;
    cout<<"Enter the Factorial Number: ";
    cin>>n;
    cout<<"\nFactorial number is: "<<f(n)<<endl;

    return 0;
}
