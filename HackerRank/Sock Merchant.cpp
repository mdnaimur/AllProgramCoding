#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
        int nn = ar.size();
      sort(ar.begin(),ar.end());
        int count=0;
        for(int i=0;i<n-1;i++){
            if(ar[i]==ar[i+1]){
                count=count+1;
                i=i+1;
            }
        }
        return count;
    }

int main()
{
    vector<int> arr;
    int n,i,j,countt=0,stock=0,num;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    /*for(i=0;i<n;i++)
    {
        stock=0;

       for(j=i+1;j<n;j++)
       {
           if(i!=j&&arr[i]==arr[j])
           {
               stock++;


           }
    if(stock==2)
       {
           countt++;
       }
       }

    }*/
     cout<<sockMerchant(n,arr);
     return 0;
}
