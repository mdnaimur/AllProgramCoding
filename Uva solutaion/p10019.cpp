#include<iostream>

using namespace std;

int main()

{
    int t,n,b1,b2,a[1000],m,q;
    cin>>t;
while(t--)
    {
        cin>>n;
        b1=0;
        b2=0;
       int r,i,j;
       m=n;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n/=2;
    }
    for(i=i-1;i>=0;i--)
    {
        if(a[i]==1)
            b1++;
    }
    while(m>0)
    {
        j=m%10;
        if(j==1||j==2||j==4||j==8)
            b2++;
        else if(j==3||j==5||j==6||j==9)
            b2+=2;
        else if(j==7)
            b2+=3;
         m/=10;

    }
    cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
