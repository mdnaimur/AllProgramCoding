#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    char str[128],st[128];
   int i,j,len1,len2,t;
cin>>t;
while(t--)
{
   cin>>str;
   cin>>st;
    len1=strlen(str);
    len2=strlen(st);
    for(i=0;i<len1-len2;i++)
    {
        if(st[0]==str[i])
        {
            for(j=0;j<len2;j++)
            {
                if(st[j]!=str[i+j]) break;
            }
            if(j==len2)
            {
                cout<<i<<endl;
            }

        }
    }
}
return 0;
}
