#include<iostream>
using namespace std;
int main()
{
    #line 121
    cout<<"Current line is "<< __LINE__<<endl;
   cout<<"Current file "<< __LINE__ <<endl;
    cout<<"Current file is "<< __FILE__<<endl;
    cout<<"Code date "<<__DATE__<<endl;
    cout<<"Time Now "<<__TIME__<<endl;
    cout<<"STDC C++ "<<__STDC__<<endl;
    cout<<"Version "<<__cplusplus<<endl;

    return 0;
}
