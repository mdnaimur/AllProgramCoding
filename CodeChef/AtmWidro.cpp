#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int w;
    float t;
    cin>>w>>t;
    if(w+.5>t)
    {

        cout<<t<<endl;
    }
    else if(w%5!=0)
    {

        cout<<t<<endl;
    }
    else

        cout<<t-w-.5<<endl;

    return 0;

}
