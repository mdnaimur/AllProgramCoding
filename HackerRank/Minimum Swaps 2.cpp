#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
int minimumSwaps(int[] a) {
        int swap=0;
        for(int i=0;i<a.length;i++){
            if(i+1!=a[i]){
                int t=i;
                while(a[t]!=i+1){
                    t++;
                }
                int temp=a[t];
                a[t]=a[i];
                a[i]=temp;
                swap++;
            }
        }
        return swap;

    }
*/
void swapp(int *x,int *y)
{
  int temp;

 temp=*x;
 *x=*y;
 *y=temp;
}
int main()
{
    int i,n,temp,counts=0,value,minm,j;
    vector<int> ar;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        ar.push_back(value);
    }

    for(i=0;i<n-1;i++)
    {
        minm=i;
        for(j=i+1;j<n;j++)

            if(ar[j]<ar[minm])
                    minm=j;

              swapp(&ar[minm],&ar[i]);
               counts++;


    }


    cout<<counts<<endl;
    return 0;

}
