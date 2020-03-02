#include<iostream>
#include<string>

#include<cstring>
using namespace std;
int main()
{
    char name[1000],temp[1212];
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>name;
        for(j=i;j<n;j++)
        {
            if(strncmp(name[i],name[j])>0)
            {
                strncpy(temp,name[i]);
                strncpy(name[i],name[j]);
                strncpy(name[j],temp);
            }
        }
        cout<<"Out Put is " <<name<<endl;
    }
    return 0;
}
