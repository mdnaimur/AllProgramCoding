#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t now =0;
	char* dt=ctime(&now);
	cout<<"Local time is : "<<dt<<endl;
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "The UTC date and time is:"<< dt << endl;
}
