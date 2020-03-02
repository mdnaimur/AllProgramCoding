#include <iostream>
#include <stdexcept>
using namespace std;
void test()throw(int,char,runtime_error)
{
    throw 20;
}

int main()
{
    try{
      test();
    }
    catch(int a)
    {
        cout<<"Integer type error "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"character type error "<<b<<endl;
    }
catch(runtime_error e)
    {
        cout<<"Runtime Error type error "<<e.what()<<endl;
    }

    return 0;

}
