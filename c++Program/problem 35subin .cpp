#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,x2,y1,y2,t,r,i;

    cin>>t;
while(t--){

  cin>>x1>>y1>>r>>x2>>y2;
  i=sqrt(pow(abs(x2-x1),2)-pow(abs(y2-y1),2));
cout<<"Reslt "<<i<<endl;
  if(!(r>=i))
  {
      cout<<"The point is not inside the circle "<<endl;
  }
  else
  {
      cout<<"The point is inside the circle "<<endl;
  }
}

  return 0;

}
