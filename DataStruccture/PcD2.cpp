#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int i,maxi,id;
    for(i=0;i<10;i++) a[i]=0;
    for(i=0;i<5;i++)
    {
        cin>>id;
        a[id-1];
    }
    maxi=0;
    for(i=0;i<10;i++)

        if(maxi<a[i])
            maxi=a[i];
        cout<<"winner are :"<<endl;
        for(i=0;i<10;i++)

            if(maxi=a[i])

                cout<<i+1;
                cout<<endl;



    return 0;
}
