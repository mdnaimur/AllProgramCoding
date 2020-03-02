#include<iostream>
using namespace std;
int main()
{
	char input;
	cout<<"Enter the great: ";
	cin>>input;
	switch(input)
	{
		case 'A' :
			case 'a':
			{
				cout<<"Excellent you are!!\n";
				break;
			}
			case 'B' :
			//	case '60' :
			{
				cout<<"Good you are!!\n";
				break;
			}
			case 'C' :
			{
				cout<<"Not bad you are!!\n";
				break;
			}
			case 'D' :
			{
				cout<<"Not Good you are!!\n";
				break;
			}
			case 'E' :
			{
				cout<<"Bad you are!!\n";
				break;
			}
	}
	return     0;
}
