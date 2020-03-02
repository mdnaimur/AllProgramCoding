#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double root,p,result;

	while(cin>>root>>p)
	{
		if(root>=1&&p>=1)
		{
			result=pow(p,1/root);

			cout<<result<<endl;
		}

	}
	return 0;
}
