#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {

     vector<int> temp(6, 0);
      // cout<<temp.size()<<endl;
    for(int i = 0; i <arr.size(); i++){
        temp[arr[i]]++;

    }

    int maxi = -1, count = -1, type = -1;

    for(int i = 1; i <= 5; i++){
          // cout<<"after creating temp: "<<temp[i]<<endl;
        if(temp[i] > maxi){
            count = 1;
            maxi = temp[i];
           // cout<<"max value:"<<maxi<<endl;
            type = i;
           // cout<<"On time i-> "<<i<<endl;
            //cout<<"return type is|>"<<type<<endl;
        }
        else if(temp[i] == maxi){
            count++;
        }

    }
   //cout<<"\n counter value "<<count<<endl;

    return type;
}



int main()
{
    int n,k;
    vector<int> arr;
  cin>>n;
    for (int i = 0; i <n; i++) {
      cin>>k;
      arr.push_back(k);
    }

    int result = migratoryBirds(arr);

    cout << result << "\n";



    return 0;
}
