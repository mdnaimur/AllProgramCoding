#include<iostream>
#include<string>
using namespace std;

class person
{
public:
    void introduce()
    {
        cout<<"Person Calling Base class method"<<endl;
    }
};
class student:public person{
public:
    public:
    void introduce()
    {
        cout<<"student  Calling Base class method via person"<<endl;
    }
};
void whois(person p)
{
    p.introduce();
}
int main()
{
    student naimur;
    naimur.introduce();
   whois(naimur);

    return 0;
}
