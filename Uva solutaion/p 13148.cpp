#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    long long s,q;

   while (scanf("%d", &n) == 1 && n)
    {
        s=pow(n,0.5);
        q=pow(n,0.3);
        //cout<<s<<endl<<q<<endl;
        while(s*s<n)
            s++;
    while(q*q*q<n)
        q++;
       // if(n*n!=s&&n*n*n!=q)
       if(s*s!=n&&q*q*q!=n)
        {
            cout<<"Ordinary\n";

        }
        else
        {
            cout<<"Special\n";

        }
    }
    return 0;
}


