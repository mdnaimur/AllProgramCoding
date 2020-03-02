#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftOneByOne(int a[],int n)
{
    int temp=a[0],i;
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];

    }
    a[i]=temp;
}
void leftRotaion(int a[],int d,int n)
{
    for(int i=0;i<d;i++)
        leftOneByOne(a,n);
}
int main()
{
    int i,n,t,d;
    cin>>n;
     cin>>d;
    //vector<int> arr(n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        //arr.push_back(t);
    }

    leftRotaion(arr,d,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
