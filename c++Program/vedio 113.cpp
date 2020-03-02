#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("dalim.txt");
    if(!file.is_open())
        {
            cout<<"Error! file is not created";
        }
        else{
            file<<"Naimur finished 113 vedio on c++"<<endl;
            file<<"he wants to learn more "<<endl;
            file<<"He is an engineer"<<endl;
            cout<<"File created successfully"<<endl;
            file.close();
        }

        ifstream filen;
    filen.open("dalim.txt");
    if(!filen.is_open())
    {
        cout<<"Error it have a mistake";
    }
    else
    {
        cout<<"Reading from text file"<<endl;
        string line;
        while(filen.good()){
        getline(filen,line);
        cout<<line<<endl;
        }

        return 0;
}
}

