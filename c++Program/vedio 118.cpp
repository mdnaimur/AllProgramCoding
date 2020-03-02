#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Person{
char name[810];
int age;
public:
Person()
{
    strcpy(name,"Noname");
    age=0;

}
Person(char *name,int age)
{
    strcpy(this->name,name);
    this->age=age;
}
void dis()
{
    cout<<"I am "<<name<<"\nmy age is "<<age<<endl;
}
void change()
{
     strcpy(name,"hack!!!");
    age=110;

}

};

int main()
{
    Person naimur("Md Naimur Rahman",25);
    fstream file("naimurP.bin",ios::binary| ios::in | ios::out | ios::trunc);

    if(!file.is_open())
    {
        cout<<"Error your file is not created "<<endl;
    }
    else{

        file.write((char *)&naimur,sizeof(Person));
        file.seekg(0);
        Person dalim;
        file.read((char *)&dalim,sizeof(Person));
        naimur.dis();
        dalim.dis();
        cout<<endl<<endl;

        cout<<"After the change then it is "<<endl<<endl<<endl;
        naimur.change();
        naimur.dis();
        dalim.dis();
    }

return 0;
}
