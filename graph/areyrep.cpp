#include<iostream>
using namespace std;

int main()
{
    int a[2][3],r,c;
     for(r=0;r<=1;r++)
     {
         for(c=0;c<=2;c++){
             cin>>a[r][c];
            a[r][c]=0;
         }

     }

    for(r=0;r<=1;r++)
     {
         for(c=0;c<=2;c++)
            cout<<"\t"<<a[r][c];
            cout<<endl;
     }
}
