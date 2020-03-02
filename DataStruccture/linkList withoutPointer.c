#include<stdio.h>
int head[10000];
int data[10000],next[10000];
int id;

void insert(int x,int y)
{
    data[id]=y;
    next[id]=head[x];
    head[x]=id;
    id++;
   while(id==NULL)
    printf("Out put is: Data[%d]->Address[%d]\n",data,id);
}

int main()
{
    int i,j,n;
   /* printf("How many element you want to add: ");
    scanf("%d",&n);
    */

    insert(20,2);
    insert(40,3);
    insert(50,1);
}
