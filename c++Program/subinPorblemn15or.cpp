#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
 
 
int main()
{
	string s,b;
	int T;
	cin>>T;
 
	while(T--)
    {
        cin>>s;
        int i,j,k,z=0,m=0,n=1,c=0,a[100];
        sort(s.begin(),s.end());
 
        for(i=0;i<s.size();i++)
        {
            for(j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j] && s[j]!='*')
                {
                    n++;
                    s[j]='*';
                }
            }
            if(s[i]!='*')
            {
                b[c++]=s[i];
                a[z++]=n;
            }
            n=1;
        }
        for(i=0;i<z;i++)cout<<b[i]<<" = "<<a[i]<<endl;
        cout<<endl;
    }
}
