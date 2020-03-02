#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
int cd,cm,cy,ld,lm,ly,fine=0;

    int dd,mm,yy;
    cin>>cd>>cm>>cy>>ld>>lm>>ly;
    dd=cd-ld;
    mm=cm-lm;
    yy=cy-ly;
    if(yy>0)
    {
        fine=10000;
    }
    else if(mm>0&&yy==0){
        fine=500*mm;
    }
    else if(dd>0&&mm==0){
        fine=dd*15;
    }
    cout<<fine<<endl;
}

