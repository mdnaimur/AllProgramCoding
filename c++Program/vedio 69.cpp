#include<iostream>
#include<string>

using namespace std;

class people{
protected :
    string name;
public :
    void setname(string iname)
    {
        name=iname;
    }
};

class student:private people{
public:
    people ::name;
    void dispal(){
    cout<<name<<endl;

    }
    void studentsetname(string iname)
    {
        name=iname;
    }
};

int main()
{
student naimur;
//naimur.name="i am md naimur rahman";
//naimur.dispal();
//naimur.studentsetname("Md Naimur Rahman in sub class");
//naimur.dispal();
naimur.setname("Base class");
naimur.dispal();
    return 0;
}
