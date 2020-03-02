#include<iostream>
#include<exception>
using namespace std;

class Overspeed : public exception {
    int speed;
public:
    const char* what(){
     return "check out your speed \n you are in car not aeroplane\n";
    }

    void getspeed()
    {
        cout<<"Your speed is "<<speed<<endl;
    }
    void setspeed(int speed)
    {
        this->speed=speed;
    }
};

class car{
    int speed;
public:
    car()
    {
        speed=0;
        cout<<"Speed is "<<speed<<endl;
    }
    void accelarate()
    {
        for(;;)
        {
            speed+=10;
            cout<<"speed is "<<speed<<endl;
            if(speed>=150)
            {
                Overspeed s;
                s.setspeed(speed);
                throw s;
            }
        }
    }
};
int main()
{
    car naimur ;
    try{
      naimur.accelarate();
    }
    catch(Overspeed s)
    {
        cout<<s.what()<<endl;
        s.getspeed();
    }
}
