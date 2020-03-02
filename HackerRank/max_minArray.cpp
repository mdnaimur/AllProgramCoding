#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i,n,k,c=0;
    vector<int> arr;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    int max=0,j,index=0,count;
    for(i=0;i<n;i++){
            count=0;
       for(j=0;j<n;j++){
        if(arr[i]==arr[j])
        {
            count++;
        }
        if(count>max){

        }
       }
        cout<<"counter value: "<<count<<endl;

    }
    for(i=0;i<n;i++){

        if(max==arr[i]){
            c++;
        }
    }
    cout<<c<<":->"<<max<<endl;

    return 0;
}

