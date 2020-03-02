#include<bits/stdc++.h>

using namespace std;
#define MAX 1000


struct Vertex{
  char label;
  bool visited;
};


int queu[MAX];
int rear =-1;
int font =0;
int qElementC=0;


struct Vertex* lstV[MAX];

int addMatrix [MAX][MAX];


int vCount =0;

void inser(int data){
   queu[++rear] =data;
   qElementC++;

}
int removeData()
{
    qElementC--;
   return queu[font++];
}
bool isQueueEmpty(){
  return qElementC ==0;
}

void Addvertex(char label){
    struct Vertex* vertex = (struct Vertex*)malloc(sizeof(struct Vertex));
    vertex->label=label;
    vertex->visited =false;
    lstV[vCount++] = vertex;
}

void addEdge(int s,int e)
{
    addMatrix[s][e]=1;
    addMatrix[e][s]=1;
}
void display(int vIdex)
{
    cout<<" "<<lstV[vIdex]->label;
}

int UnvisitedV(int vIdex){
int i;
for(i=0;i<vCount;i++)
{
    if(addMatrix[vIdex][i]== 1 && lstV[i]->visited==false)
        return i;
}
return -1;

}

void  breadthFirstSearch(){
  int i;
  lstV[0]->visited=true;
  display(0);

  inser(0);
  int unVisited;
  while(!isQueueEmpty())
  {
      int temVertex= removeData();
      while((unVisited=UnvisitedV(temVertex))!= -1)
      {
          lstV[unVisited]->visited=true;
          display(unVisited);
          inser(unVisited);
      }
  }
  for(i=0;i<vCount;i++)
  {
      lstV[i]->visited=false;
  }

}
int main(){
   int i,j,nv,k;
   int x,y;
   char v;
   cout<<"Enter the Node/Vertex Number :";
 cin>>nv;
    for(i=0;i<nv;i++)
    {
        for(j=0;j<nv;j++)
            addMatrix[i][j]=0;
    }





   cout<<"\nEnter the Node/Vertex"<<endl;
   for(i=0;i<nv;i++){
    cin>>v;
    Addvertex(v);
   }
   cout<<"\nEnter the edge list number "<<endl;
   cin>>k;
   for(i=0;i<k;i++)
   {
      cin>>x>>y;
      addEdge(x,y);
   }
   printf("\nBreadth First Search: ");
    breadthFirstSearch();
    return 0;

}
