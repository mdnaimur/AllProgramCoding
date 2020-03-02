#include<iostream>
#include<string>
using namespace std;
int main()

{
    char s[100];
    int t,i,cr;
    cin>>t;
while(t--)
{
     cr=0;

getline(s,100);


        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ')
            {
                cr++;
            }

        }
                 cout<<"Count = "<<cr+1<<endl;
    }


    return 0;

}
