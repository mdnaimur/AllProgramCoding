#include<iostream>
#include<stack>
#include<cstdlib>
#include<cstring>

using namespace std;

void Reverse(char *c,int n)
{
   stack<char>S;
	for(int i=0;i<n;i++)
	{
		S.push(c[i]);
	}
	for(int i=0;i<n;i++)
	{
		c[i] =S.top();
		S.pop();
	}
}
int main()

{
	char chr[101];
	
	cout<<"Enter the String: ";
	gets(chr);
	Reverse(chr,strlen(chr));
	
	cout<<"\n\nAfter Reversing : "<<chr;
	
	return 0;
}
