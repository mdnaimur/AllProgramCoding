#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
   int data;
   Node *next;
   Node *prev;
};
Node * head;
 Node *GetNewNode(int x)
 {
     Node *newNode=new Node;
     newNode->data=x;
     newNode->next=NULL;
     newNode->prev=NULL;
     return newNode;
 }

 void InsertAtHead(int n)
 {
     Node* newNode=GetNewNode(n);
     if(head==NULL)
     {
         head=newNode;
         return ;

     }
     head->prev=newNode;
     newNode->next=head;
     head=newNode;
 }
 void InsertAtTail(int k)
 {
     Node *temp=head;
     Node *newNode=GetNewNode(k);
     if(head==NULL)
     {
         head=newNode;
         return ;
     }
     while(temp->next!=NULL)
        temp=temp->next;
     temp->next=newNode;
     newNode->prev=temp;
 }
void print()
{
    Node* temp=head;
    cout<<"Forwarding :";
    while(temp!=NULL)
    {
        cout<<"-> "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void ReversePrint()
{
    Node* temp=head;
    if(head==NULL) return;
    cout<<"In Reversing function: ";
    while(temp->next != NULL) {
            cout<<"-> "<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
    cout<<"Reversing: ";
    while(temp!=NULL)
    {
        cout<<"-> "<<temp->data;
        temp=temp->prev;

    }
    cout<<endl;
}

int main()
{
    int i,m,n;
    cout<<"How many value you want to add: ";
    cin>>m;
    cout<<endl;
    for(i=1;i<=m;i++)
    {
        cin>>n;
        InsertAtTail(n);
    }
    print();
    cout<<endl;
    ReversePrint();

    return 0;
}
