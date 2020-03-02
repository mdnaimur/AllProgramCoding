#include<iostream>

using namespace std;

class marks{
	int makr;
	int smark;
	public:
		marks()
		{
			makr=0;
			smark=0;
		}
		marks(int im,int sm)
		{
			makr=im;
			smark=sm;
		}
		void dispaly()
		{
			cout<<makr<<endl<<smark<<endl;
		}
		marks operator+(marks m)
		{
			marks temp;
			temp.makr=makr+m.makr;
			temp.smark=smark+m.smark;
			return temp;
		}

		marks operator-(marks m);
};

marks marks::operator-(marks m)
    {
            marks temp;
			temp.makr=makr-m.makr;
			temp.smark=smark-m.smark;
			return temp;
        }

int main()
{
	//marks na,ma;
marks na(1,6),ma(9,4);

	marks ja=na+ma;
	marks za=na-ma;
	za.dispaly();
	ja.dispaly();
}
