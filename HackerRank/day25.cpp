#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n){
    int i;
if(n==1||n==0) return false;
if(n==2) return true;
   for(i=2;i*i<=(n/2)+1;i++){
        if(n%i==0){
            return false;

        }

    }
    return true;

}
int main() {
int n,i,j=0,k;
    cin>>k;

    while(k--){
        cin>>n;
       if(isprime(n)==true) cout<<"Prime"<<endl;
       else cout<<"Not prime"<<endl;

    }



    return 0;
}
