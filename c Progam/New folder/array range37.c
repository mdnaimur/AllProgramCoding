#include<iostream>
using namespace std;
void disply(const int *start,const int *end)
{
    const int *ptr;
    for(ptr=start;ptr !=end;ptr++)
    {
        cout<<*ptr<<endl;
    }
}

int main()
{
    int n[]={20,63,74,96,26};
    disply(n,n);
    return 0;
}
