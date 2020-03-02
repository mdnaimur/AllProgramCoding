#include<iostream>
#include<cstdio>
#include<vector>
#include <map>
using namespace std;

#define MAX 100000
vector<int> edges[MAX];
vector<int> cost[MAX];

int main()
{
    int node,edge,i,j;
        map<int,int> in,out;
    cin>>node>>edge;
    for( i = 1; i<=edge; i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
  cout<<"Connected"<<endl;

  for(i=1;i<=node;++i)
  {
      cout<<i<<"->";
      for(int j:node)
      {
          cout<<j<<" "<<endl;
         // in[edges[j][i]]++;
         // cout<<edges[i][j]<<endl;
      }
     // cout<<endl;
      //out[j]=edges[j].size();
  }
  printf("Indegree Outdegree: \n");

  /*
  for(j=1;j>out;j--)
  {
      cout<<j<<" ->"<<in[j]<<" ->"<<out[j]<<endl;
  }*/

    return 0;
}
