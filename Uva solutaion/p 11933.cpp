#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,even,temp,c,sum;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        temp=n;
        c=0;
        even=0;
        sum=0;
        while(temp!=0)
        {
            if(temp%2==1)
            {
                even++;
                if(even%2==1)
                {
                    sum+=pow(2,c);
                }
                //cout<<"Sum is "<<sum<<endl<<"Even count "<<even<<endl;
            }
            temp/=2;
            c++;
        }
        printf("%d %d\n",sum,n-sum);
    }
    return 0;
}
