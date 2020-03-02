#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int>grade,finalGread;
    int i,j,n,t,m,value,div,mod,grading,mins;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>value;
        if(value>=0&& value<=100)
        {
            grade.push_back(value);
        }
    }
    for(i=0;i<grade.size();i++)
    {
        div=grade[i]/5;
        mod=grade[i]%5;
        grading=(div+1)*5;
        mins = grading-grade[i];

       if(mod<3||grade[i]<38)
       {
         m=grade[i];
       }

       else
       {
           m=grading;
       }
       cout<<m<<endl;
    }
    return 0;
}
