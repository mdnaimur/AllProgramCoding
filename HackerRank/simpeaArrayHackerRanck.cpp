// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> nm,dilam;
    int n,i,t=0,data;
    int raklam;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>data;
      nm.push_back(data);

    }
    for(i=0;i<n;i++)
    {
        t=t+nm[i];

    }
    cout<<"\n"<<t;
return 0;
}
