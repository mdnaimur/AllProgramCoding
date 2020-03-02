#include<bits/stdc++.h>
#include<iostream>

using namespace std;

long int result(vector<int> arr,int k){
 int j,sum=1;
        for(j=0;j<k;j++){
        sum*=arr[j];
    }
    return sum;

}
int main()
{
    int t,k,p,i,c=1,j;
    long int sum;
    vector<int> arr;
    cin>>t;
    while(t--){

        cin>>k;
        for(i=0;i<k;i++){
            cin>>p;
            arr.push_back(p);
        }

        cout<<"Case "<<c<<": "<<result(arr,k)<<endl;
     arr.clear();
    c++;

    }

}
