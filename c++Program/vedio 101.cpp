#include<iostream>
#include<cstdlib>
#include<stdexcept>
#include<string>
using namespace std;
class Student{
	string name;
	int age;

	public:
		Student()
		{
			name ="Noname";
			age=0;
		}
		Student(string name, int age)
		{
			this->name=name;
			this->age=age;
		}
		void who()
		{
			cout<<"My name is "<<name<<" and my age is "<<age<<endl;
		}
		void *operator new(size_t size)
		{
			void *pointer;
			cout<<"Overeload new. size is "<<size<<endl;
			pointer=malloc (size);
			if(!pointer)
			{
				bad_alloc ba;
				throw ba;
			}
			return pointer;
		}
		void operator delete(void *pointer)
		{
			cout<<"Overload delete "<<endl;
			free(pointer);
		}
};

int main()
{
	Student *naimurPtr;
	try{
		naimurPtr=new Student("MdNiamuRahan",24);

		naimurPtr->who();
			delete naimurPtr;
	}
	catch(bad_alloc b)
	{
		cout<<b.what()<<endl;
	}

	return  0;
}
