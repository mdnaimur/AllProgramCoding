#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

vector<int> bubbleSort(vector<int>arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
            return arr;
}
void minimumBribes(vector<int> q) {
    int i,n,count=0,j,temp;
    n= q.size();
    //int p[n];
   vector<int> p=bubbleSort(q,n);;

    for(i=0;i<n;i++)
    {

        cout<<"Inside function "<<p[i]<<endl;
        if(p[i]>p[i+1]&&temp<3)
        {
            temp=p[i];
            p[i]=p[i+1];
            p[i+1]=temp;
            count++;
        }
        if(q[i]==p[i])
        cout<<count<<endl;
        else
        {
            cout<<"Too chaotic"<<endl;
        }

    }


}

int main()
{
    int t;
    cin >> t;
    vector<int>q;
    int value,n;

    while(t--) {
      cin>>n;
      for(int i=0;i<n;i++)
      {
          cin>>value;
          q.push_back(value);
      }

     /* for(int i=0;i<n;i++)
      {
          cout<<q[i]<<" ";
      }
      cout<<"\nInput is ok "<<endl;*/
        minimumBribes(q);
    }

    return 0;
}
