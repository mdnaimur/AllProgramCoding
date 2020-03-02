#include<iostream>
#include<math.h>
using namespace std;
int sod(unsigned long long int p);

int f(unsigned long long int n) {
   while (n >= 10) {
      n = sod(n);
   }
   return n;
}
int sod(unsigned long long int p)
{
    int temp;
    temp=p;
    int sum=0,rem;
    while(p>0)
    {
        rem=p%10;
        sum=sum+rem;
        p/=10;
    }

    return sum;
}
int main()
{
    unsigned long long int a,b,r;
    int k,sum=0,rem,t,m;
     int coun=1;
    cin>>t;
    while(t--)
{

    cin>>a>>b;
     r=pow(a,b);

    k=f(r);

    cout<<"Case "<<coun<<": "<<k<<endl;
  coun++;

    }
return 0;

}

