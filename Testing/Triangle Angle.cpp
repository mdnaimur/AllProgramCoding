#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double  a,b,c,A,B,C;
    cout<<"Enter The Triangle Side Value : " ;
    cin>>a>>b>>c;
    A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
    B=acos((pow(c,2)+a*a-pow(b,2))/(2*c*a));
    C=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
    cout<<"Triangle A angle is : "<<A*(180/3.1416)<<endl;
     cout<<"Triangle B angle is : "<<B*(180/3.1416)<<endl;
      cout<<"Triangle C angle is : "<<C*(180/3.1416)<<endl;

      return  0;
}
