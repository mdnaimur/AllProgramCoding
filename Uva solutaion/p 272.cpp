#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main()
{
    char input[100002];
long int len,i,cun=0;
while(cin.getline(input,100002))
{

    len=strlen(input);
    for(i=0;i<len;i++)
    {
        if(input[i]=='"')
        {
            cun++;

        if(cun%2==1)
        {
            cout<<"``";
        }
        else if(cun%2==0){
            cout<<"''";
        }
    }
    else
        cout<<input[i];

    }
    cout<<endl;
}
    return 0;
}
