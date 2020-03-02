#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,r,c,sum,jj=0;
    int total= std::numeric_limits<int>::infinity();

    vector<vector <int>> arr(6,vector<int> (6));
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            //cout<<arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]<<" ";

            /*

            sum= arr[i][j]+arr[i][j+1]+arr[i][j+2];
            sum+=arr[i+1][j+1];
            sum+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];*/

         sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
              if(sum>total)
              {
                  total=sum;
              }


        }
        cout<<endl;


    }
    cout<<total<<endl;
 return 0;
}
