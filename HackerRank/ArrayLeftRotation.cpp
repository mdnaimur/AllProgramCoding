#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int>rotLeft(vector<int>arr,int number)
{
   /* first need to find mod of arr and number
        inside loop again mood array

   */

   vector<int> temp;
   int i,j,mod;
   int arrSize= arr.size();
   mod =number%arrSize;


   for(i=0;i<arrSize;i++)
   {

      temp.push_back(arr[(mod+i)%arrSize]);

   }

   return temp;

}

int main()
{
    int arryElement,numberArry,i,replaceValue;
    vector<int> arry;

    //input number of array and replaceValue
    cin>>numberArry>>replaceValue;

    for(i=0;i<numberArry;i++)
    {
        cin>>arryElement; //array element input
        arry.push_back(arryElement);// push array value in vector
    }


    vector<int> result = rotLeft(arry, replaceValue); //find left rotation

   for ( i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    return 0;

}
