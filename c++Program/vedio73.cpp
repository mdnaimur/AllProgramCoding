#include<iostream>

using namespace std;

class person{
public:
    person(){
    cout<<"Constructor is created !"<<endl;
    }
    ~person()
    {
        cout<<"Destructor is created "<<endl;
    }
};
class student:public person{
public:
    student(){
    cout<<"Constructor in created in Student class"<<endl;
    }
    ~student(){
    cout<<"Destructor in created in Student class"<<endl;
    }
};
int main()
{
    student naimur;

    return 0;
}
