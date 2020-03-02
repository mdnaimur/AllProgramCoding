#include<iostream>
#include<string>

using namespace std;
int main()
{
	int t,i,len;
	string str;
	cin>>t;
	while(t--)
		{
			cin>>str;;
			len=str.length();
			for(int i=len;i>=0;i--)
			{
				cout<<str[i-1];
			}

			cout<<"\n";
		}
		return 0;
}
