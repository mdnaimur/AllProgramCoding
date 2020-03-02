#include<iostream>
using namespace std;

template <class T>void display(T x, int y);
int main()
{
    display("Md Naimur Rahman",5);
    return 0;
}
template<class T> void display(T x,int y)
{
    for(int counter=1;counter<=y;counter++)
    {
        cout<<x<<endl;
    }
}
