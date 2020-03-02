#include<iostream>
using namespace std;

class person{
private:
    int age;
public:
    void setage(int age)
    {
       this->age=age;
    }
    void showage(){
    cout<<"My age is : "<<age<<endl;
    }
};

int main()
{
    person naimur;
    naimur.setage(25);
    naimur.showage();

    return 0;
}
