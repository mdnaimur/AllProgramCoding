#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 string s;
   vector<int>d;
   int i;

    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
       for(i=0;i<s.size();i++){
        if(i%2==0){
            cout<<s[i];
        }
       }

   cout<<" ";
         for(i=0;i<s.size();i++){
        if(i%2==1){
            cout<<s[i];
        }
       }
       cout<<endl;
    }

    return 0;

}
