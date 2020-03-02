#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include <iterator>

using namespace std;


int main()

{
	vector<int> n;
	n.push_back(5);
	n.push_back(6);
	n.push_back(7);
	n.push_back(8);
	for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    return 0;
}

