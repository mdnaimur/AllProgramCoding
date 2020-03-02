#include<iostream>
using namespace std;

template<typename myname> void display(myname x,myname y)
{
    cout<<"You pass this data  "<<x<<" And another one " <<y<<endl;
}

int main()
{
    display(21,12);
    //display(21.23,"DALIM");
    display("Md Naimur Rahman","DALIM");
    return 0;
}
