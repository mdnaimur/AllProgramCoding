#include <bits/stdc++.h>
#include<iostream>
using namespace std;



// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int i,j,sum,count=0;

    for(i=0;i<n;i++){

        sum=0;
       for(j=i+1;j<n;j++){
            sum=ar[i]+ar[j];

        if((ar[i]+ar[j])%k==0){
            count++;
          }
          /*
          if(sum==k){
            count++;
          }*/

        }

    }

return count;
}

int main()
{

    int n;

    int k,p;
   cin>>n>>k;
    vector<int> ar;

    for (int i = 0; i < n; i++) {
           cin>>p;
       ar.push_back(p);

    }


    int result = divisibleSumPairs(n, k, ar);

    cout << result << "\n";



    return 0;
}


