#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<vector<int> >arra;

    int i,j,c,r,k,value,n;
    cout<<"Enter row and column no: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
         vector<int> row;
        for(j=0;j<n;j++)
        {
           cin>>value;
           row.push_back(value);
        }
        arra.push_back(row);
    }
    cout<<"Vecotr matrix are: \n";
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cout<<arra[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Diagonal are"<<endl;

    for(k=0;k<=n-1;k++)
    {
        i=k;
        j=0;
        while(i>=0)
        {
            cout<<arra[i][j]<<" ";
            i=i-1;
            j=j+1;
        }
        cout<<endl;
    }

    for(k=0;k<=n-1;k++)
    {
        i=n-1;
        j=k+1;
        while(j<=n-1)
        {
            cout<<arra[i][j]<<" ";
            i=i-1;
            j=j+1;
        }
        cout<<endl;
    }


}
