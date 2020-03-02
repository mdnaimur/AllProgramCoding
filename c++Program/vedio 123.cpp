#include<iostream>
#define WINDOWS 1
#define LINUX 2
#define MAC 3
#define OS LINUX
using namespace std;
int main()
{
    #if OS== WINDOWS

    cout<<"YOU USE WINDOWS OS"<<endl;

    #elif OS==LINUX
    cout<<"You are LINUX user"<<endl;
    #else
    cout<<"You are MAC user"<<endl;

    #endif // OS

    cout<<"You are out of program \n";

    return 0;
}
