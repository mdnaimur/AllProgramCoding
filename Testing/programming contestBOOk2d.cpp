#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1,x2,y1,y2,r;
	cout<<"Enter the first point(x1,y1) : ";
	cin>>x1>>y1;
	cout<<endl;
	cout<<"Enter the second point(x2,y2) : "; 
    cin>>x2>>y2;
    r=fabs(sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
    
    cout<<"Distance "<<r<<endl;
    
    return 0;
}
