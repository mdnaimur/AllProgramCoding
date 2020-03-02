#include<iostream>
#include<string>
using namespace std;

class father{
public:
    int height;
    void askfather()
    {
        cout<<"I am your father ask me any question!"<<endl;
    }
};
class mother{
public:
    string color;
    void askmother()
    {
        cout<<"I am your mother ask me any question!"<<endl;
    }
};
class childern:public father,public mother{
public:
    void askparents()
    {
        cout<<"I ask question to my parents !"<<endl;
    }
    void colorandheight(string icolor,int ihieght)
    {
        color=icolor;
        height=ihieght;
    }
    void display()
    {
        cout<<"Height is "<<height<<endl<<"Color is "<<color<<endl;
    }
};

int main()
{
    childern naimur;
    naimur.colorandheight("Black",25);
    naimur.display();
    naimur.askfather();
    naimur.askmother();
    return 0;
}
