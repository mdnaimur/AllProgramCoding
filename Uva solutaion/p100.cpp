#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,n,cnum,m,sum,k,r;

while(cin>>i>>j)
{
 k=i;
 r=j;
 if(i>j)
    swap(i,j);
sum=0;

while(i<=j)
{
     n=i;
cnum=1;
    while(n!=1)
   {

       if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
         cnum++;
    }
    if(sum<cnum)
    {
        sum=cnum;
    }
    i++;
}
cout<<k<<" "<<r<<" "<<sum<<endl;
}
    return 0;
}
