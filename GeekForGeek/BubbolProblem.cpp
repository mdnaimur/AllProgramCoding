#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Bubble(int arr[],int n)
{
    int i,j;
    for(j=0;j<n-1;j++){

    for(i=0;i<n-j-1;i++)
    {
        if(arr[i]>arr[i+1])
            swap(&arr[i],&arr[i+1]);
    }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
          cin>>arr[i];

          Bubble(arr,n);

     printArray(arr, n);

    }
    return 0;
}
