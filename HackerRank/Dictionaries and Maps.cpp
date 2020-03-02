#include<bits/stdc++.h>
#include<iostream>
#include <map>
using namespace std;

int main(){

 map<string,string> dictionaries;
 int n;
 string name,phone;
 cin>>n;
 while(n--){
    cin>>name>>phone;
    dictionaries[name]=phone;
 }
  while(cin>>name)
  {
      if(dictionaries.find(name)!=dictionaries.end()){
        cout<<name<<"="<<dictionaries.find(name)->second<<endl;
      }
      else{
        cout<<"Not found"<<endl;
      }

  }
return 0;
}

