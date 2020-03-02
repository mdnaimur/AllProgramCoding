#include<iostream>

#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("dalim.txt");
    if(!file.is_open())
    {
        cout<<"Error it have a mistake";
    }
    else
    {
        cout<<"Reading from text file"<<endl;
        string line;
        while(file.good()){
        getline(file,line);
        cout<<line<<endl;
        }
    }

    return 0;
}
