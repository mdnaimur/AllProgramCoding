#include<iostream>
using namespace std;
double getAvg(int *arr,int size){
int i,sum=0;
    for(i=0;i<size;++i){
        sum+=arr[i];
    }
    double avg=double(sum)/size;

    return avg;
}
int main()
{
    int balace[50];
    int t,i;
    cout<<"Enter the size of balance : ";
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>balace[i];

    }
    double avg=getAvg(balace,t);

    cout<<"average salary is : "<<avg<<endl;

    return 0;
}
