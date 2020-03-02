#include<iostream>
using namespace std;
template <class T> T display(T x, T y);
int main()
{
    cout<<"Incomeing result "<<display(2.5,6.9)<<endl;
  cout<<"Incoming result "<<  display(4,9)<<endl;
}
template <class T> T display(T x, T y)
{
    return(x>y)?x:y;

}
