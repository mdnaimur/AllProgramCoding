#include<iostream>
#include<string>
using namespace std;
class person{
protected  :
    string name;
public:
    void setname(string iname){
    name=iname;
    cout<<"I am main class "<<name<<endl;
    }
};

class student:public person{
public:
    void display(){
    cout<<"proteccted hack "<<name<<endl;
    }
};
int main()
{
  person naimur;
    naimur.setname("naimur");

    student rahman;
    rahman.setname("naimur rahaman");
    rahman.display();
    return 0;
}
