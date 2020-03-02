#include<iostream>
#include<string>
using namespace std;
class vechile{

public:
    void mov(){
    cout<<"Vehicles can move"<<endl;
    }
};

class motobyke:public vechile{
 public :
     void moving(){
     cout<<"Motor bike have two circle "<<endl;
     }
};
int main()
{
    motobyke honda;
    honda.mov();
    honda.moving();

    return 0;
}
