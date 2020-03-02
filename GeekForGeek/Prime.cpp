#include <iostream>
using namespace std;
int main()
{
  int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;

  for(i = 2; i <= m; i++)
  {
      int k= n%i;
      cout<<k<<" ";
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          flag=1;
          break;
      }
  }
  cout<<endl;
  if (flag==0)
      cout << "Number is Prime."<<endl;
  return 0;
}
