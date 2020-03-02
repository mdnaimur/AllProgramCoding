#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using namespace std;

int main ()

{
    int N,n,Q,i,j,q,lw;
    vector<int> data;
    vector<int>::iterator low;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>n;
        data.push_back(n);
    }
    //sort(data.begin(),data.end());
    cin>>Q;
    for(j=0;j<Q;j++)
    {
        cin>>q;
      low= lower_bound(data.begin(),data.end(),q);
       if (data[low - data.begin()] == q)
           cout << "Yes " << (low - data.begin()+1) << endl;
       else
           cout << "No " << (low - data.begin()+1) << endl;
    }
    return 0;
}
