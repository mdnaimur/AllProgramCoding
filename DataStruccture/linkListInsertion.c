#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* link;
};
struct Node* head;
void Insert(int a)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  temp->data=a;
  temp->link=head;
  head=temp;
  printf("Head is %d\n",temp->data);
}
void Print()
{
  struct Node* temp=head;
  printf("\n[Head]->");
  while(temp!=NULL)
  {
      printf("[%d]->",temp->data);
      temp=temp->link;
  }
  printf("[NULl]\n");
}
int main()
{
    head=NULL;
    printf("How many number you want to Link: ");
    int n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}
