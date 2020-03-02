#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	char input[100],ut[100];

	cin.getline(input,100);
	strcpy(ut,input);

	fstream file("naimur.txt",ios::in | ios::out | ios::binary | ios::trunc);
	if(file.is_open())
	{
		int len=strlen(ut);
		for(int i=0;i<=len;i++)
		{
			file.put(ut[i]);
		}
			file.seekg(0);
			char ch;
			while(file.good())
			{
				file.get(ch);
				cout<<ch;
			}

	}
	else
	{
		cout<<"Error crerating the file";
	}

	return 0;
}
