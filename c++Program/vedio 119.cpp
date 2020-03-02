#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    cout<<"Enter the integer value : ";

    int input;
    cin>>input;
    stringstream sso;
    sso<<input;
    string strp;
    sso>>strp;
    cout<<"This come form real value -> " <<input<<endl;
    cout<<"This is copy from input value-> "<<strp<<endl;
 return 0;
}
