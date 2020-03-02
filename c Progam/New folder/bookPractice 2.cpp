#include<iostream>
int count;
extern void wt();
main()
{
	count=5;
	wt();
}

#include<iostream>
extern int count;
void wt()
{
	std::cout<<"Count is "<<count<<std::endl;
}
