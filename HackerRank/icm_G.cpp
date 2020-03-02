#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
        cout<<"Inside : "<<a<<endl;
    return gcd(b, a % b);


}
int main()
{
  int t,n,c=1;
  long long int p,k;
  cin>>t;
  while(t--){
    cin>>p>>k;
    n=gcd(p,k);
    cout<<"Case "<<c<<": "<<n<<endl;
    c++;
  }
  return 0;

}
