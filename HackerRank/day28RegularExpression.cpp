#include<bits/stdc++.h>
#include<iostream>
#include <regex>
using namespace std;


int main()
{
    int n;
    string name,id;
    multiset<string>store;
        regex r("[a-z]+@gmail\\.com$");
    cin>>n;
    while(n--){
        cin>>name>>id;
        if(regex_match(id,r))
        {
            store.insert(name);
        }

    }
    for(auto it:store)
    {
        cout<<it<<endl;
    }
    return 0;
}
