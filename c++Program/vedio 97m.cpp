#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    try{
    throw runtime_error("runtime error ");
    }
    catch(const char *err)
    {
        cout<<err<<endl;
    }
    catch(int error)
    {
        cout<<error<<endl;
    }
     catch(runtime_error e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}
