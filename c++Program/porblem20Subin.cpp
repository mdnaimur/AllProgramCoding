#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
int main()
{

    char w[1000];
    int i,t,countn;
   cin>>t;
    while(t--)
    {
         std::getchar();
        countn=0;

        cin.get(w,1000);
       // cout<<w;
        for(i=0; i<=strlen(w); i++)
        {
            if(w[i]==' ')
               {
                   countn++;
               }
                if(w[i]='.'||w[i]=='!'||w[i]=='?'||w[i]==',')
                {
                    break;
                }

        }
        cout<<"Count : "<<countn<<endl;

    }

    return 0;
}
