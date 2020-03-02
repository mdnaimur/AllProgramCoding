#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector <int> arr;

    int i,r;
    double total=0,maxi=0,min=0,maxSum,minSum;
    for(i=0;i<5;i++)
    {
        cin>>r;
        arr.push_back(r);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>maxi)
           {
               maxi=arr[i];

           }
            if(arr[i]<=arr[0])
           {
               min=arr[i];
               cout<<"testing min "<<min<<endl;

           }
        total+=arr[i];
    }
   cout<<"max value "<<maxi;
   cout<<"\n Min value "<<min<<endl;
    maxSum=total-min;
    minSum= total-maxi;
    cout<<minSum<<" "<<maxSum<<endl;

    return 0;
}
