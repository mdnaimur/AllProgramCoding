#include<iostream>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {


 cout<<"welcome to string reverser"<<endl;
    int sizeOfString;
    cout<<"please input size of string"<<endl;
    cin>>sizeOfString;
    char charray3[sizeOfString];
    cin>>charray3;

    for(int i=sizeOfString-1; i>=0; i--){

    cout<<charray3[i]<<endl;
    }
return 0;
}
