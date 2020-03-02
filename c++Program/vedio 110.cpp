#include<iostream>
using namespace std;
int main()
{

    string data("I am Dalim");
    cout<<data<<endl;
   data.append("  Rocks ");
  cout<<data<<endl;
   cout<<data.size()<<endl;
   data.insert(4," Md Naimur ");
   cout<<data<<endl;
   cout<<data.substr(4)<<endl;
   data.erase(0,14);
   cout<<data<<endl;
    return 0;
}
