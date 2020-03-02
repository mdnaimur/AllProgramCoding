#include<iostream>
using namespace std;

int main()
{
    int odd[21],even[21];
    int n,i,j,t;
     cin>>t;
     even[0]=1;
     even[1]=1;
     for(i=3;i<=n;i++)
     {
         if(i%2==0){
            even[0]=1;
            for(j=1;j<i-1;j++)
            {
                even[j]=odd[j-1]+odd[j];
            }
            even[j]=1;
         }
         else{

            odd[0]=1;
            for(j=1;j<i-1;j++)
            {
                odd[j]=even[j-1]+even[j];
            }
            odd[j]=1;
         }
     }

     return 0;
}
