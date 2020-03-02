#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    vector <vector <int> > Diagonal;
int n,i,j,m,no=0,mo=0,ru;
cin>>n;
for(i=0;i<n;i++)
{
    vector<int> row;
    for(j=0;j<n;j++)
    {
        cin>>m;
        row.push_back(m);
    }
    Diagonal.push_back(row);
}
for(i=0;i<n;i++)
{
    no+=Diagonal[i][i];
    mo+=Diagonal[i][n-1-i];
}
ru=abs(no-mo);
cout<<ru<<endl;




return 0;
}
