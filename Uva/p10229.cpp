#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int fibonci(int n){
int n1=0,n2=1,n3=0,ntemp,i;
 for(i=2;i<n;i++){
    ntemp=n1+n2;

    n1=n2;
    n2=ntemp;
    n3=n1+n2;
 }
 return n3;

}

int main()
{
    int n,m;
    long long i;

    while(scanf("%d %d",&n,&m)!=EOF){
          /*  if(n%2==0){
             i=fibonci(n)%(int)pow(2,m/2);
        cout<<i<<endl;
            }
            else if(n%2!=0){
             i=fibonci(n)%(int)pow(2,m);
        cout<<i<<endl;
            }*/

        i=fibonci(n)%(int)pow(2,m);
        cout<<i<<endl;
    }


    return 0;

}
