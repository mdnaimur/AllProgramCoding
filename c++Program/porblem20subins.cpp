#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;

int main()
{
    char s[10005];
    char *w;
    char *token;
    int t,coun,i;
    cin>>t;
   for(i=1;i<=t;i++)
    {
        getchar();

   coun=0;
   cin.getline(s,10005);

   w=strtok(s,",!;?. ");

    while(token!=NULL)
    {
        if(strlen(token)>0)
        {
            coun++;
        }
        token=strtok(NULL,",!;?. ");

    }

    cout<<"Count = "<<coun<<endl;
    }

    return 0;
}
