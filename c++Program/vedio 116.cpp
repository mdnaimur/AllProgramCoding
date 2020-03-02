#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("dalim.txt",ios::in|ios::out);
    if(!file.is_open())
    {
        cout<<"Error !!" <<endl;
    }
    else{
            cout<<file.tellg()<<endl;
        cout<<file.tellp()<<endl;
       /* file.seekg(2);
        string line;
        getline(file,line);
        cout<<line<<endl;*/
        file<<"is codeBlocks cheat with me"<<endl;
        cout<<file.tellp()<<endl;
        file.seekp(15);
        file<<" What am i doing"<<endl;
        cout<<file.tellp()<<endl;
    cout<<file.tellg()<<endl;

    }
    return 0;
}
