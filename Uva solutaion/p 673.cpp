#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
int main()
{
	char s[128];
	int i,t;
	cin>>t;
	while(t--)
	{
	    getwchar();
		cin>>s;

		for(i=0;s[i]!='\0'; i++)

			if( (s[i]==91||s[i]==40) &&(s[i]==93||s[i]==41))
		//if( (s[i]=='['||s[i]=='(') &&(s[i]==']'||s[i]==')'))
		{
			cout<<"Ans is : Yes"<<endl;

		}
		else{

			cout<<"No"<<endl;
		}

	}

	return 0;
}

