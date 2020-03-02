#include<iostream>

using namespace std;

class father{
protected:
    int height;
public:
    father(int h)
    {
        cout<<"Constructor is called "<<endl;
    height=h;
    }

};
class child:father{
public :
    child(int x):father(x){
    cout<<"child class constructor "<<endl;
    }
    void display()
    {
        cout<<"Height is "<<height<<endl;
    }
};

int main()
{
    child naimur(25);
    naimur.display();
}
