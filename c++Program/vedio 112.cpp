#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Naimur.txt",ios::in|ios::out|ios::app);
    if(!file.is_open())
    {
        cout<<"Error!! while opening the file";
    }
    else{
        cout<<"File open successfully"<<endl;
        cout<<"Write in the file";
        file<<"Naimur is back"<<endl;
        cout<<"\n\nReading from file"<<endl;

        file.seekg(0);
        string line;
        while(file.good())
        {
            getline(file,line);
            cout<<line<<endl;
        }
        file.close();
    }
    return 0;
}
