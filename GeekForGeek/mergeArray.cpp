#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int mA[],int m,int nA[],int n,int sorted[]);
void print (int a[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        cout<<a[i]<" ";
          cout<<endl;
    }

}
int main ()
{
    int m,n,i,j;
    cout<<"Number of First array";
    cin>>m;
    int mA[m];
    for(i=0;i<m;i++)
    {
        cin>>mA[i];
    }
    cout<<"\n Array2 ";
    cin>>n;
    int nA[n];
    for(i=0;i<n;i++)
    {
        cin>>nA[i];
    }
    int sorted[m+n];

    merge(mA,m,nA,n,sorted);
    print(sorted,m+n);
}
void merge(int mA[],int m,int nA[],int n,int sorted[])
{
    int i,j,k;

    i=j=k=0;
    while(i<m&&j<n)
    {
       if(mA[i]<nA[j])
        {
            sorted[k]=mA[i];
            i++;
            k++;
        }
        else
        {
            sorted[k]=nA[j];
            k++;
            j++;
        }
    }
    while(i<m) sorted[k++]=mA[i++];
    while(j<n) sorted[k++]=nA[j++];

}


