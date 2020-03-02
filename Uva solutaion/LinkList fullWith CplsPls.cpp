#include<iostream>


using namespace std;

struct Node{
  int data;
  Node *next;

};

 Node * head;

 Insert(int a)
 {
     Node* temp= new Node;

     temp->data=a;
     temp->next=head;
     head=temp;
 }
 void show()
 {
     Node* temp=head;
     cout<<"\n#Heads->";
     while(temp!=NULL)
     {
         cout<<"->"<<temp->data;
         temp=temp->next;
     }
     cout<<"->NULLs"<<endl;

 }

 void Delete(int n)
 {
     Node* temp;
     temp=head;
     if(n==1)
     {
         head=temp->next;
         delete(head);
     }
     Node* temps;
     for(int i=0;i<n-2;i++)
     {
         temp=temp->next;
     }
     temps=temp->next;
     temp->next=temps->next;
     delete(temps);
 }
 void AddElement(int e,int p)
 {
     int i;
     Node *temsOne= new Node;
     temsOne->data=e;
     temsOne->next=NULL;
     if(p==1)
     {
         temsOne->next=head;
         head=temsOne;
         return;
     }
     Node *temTwo;
     temTwo=head;
     for(i=2;i<p;i++)
     {
         temTwo=temTwo->next;
     }
     temsOne->next=temTwo->next;
     temTwo->next=temsOne;

 }
 Node* reverse(Node* head)
 {
     Node *current,*prev,*next;
     current=head;
     prev=NULL;
     while(current!=NULL)
     {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;

     }
     head=prev;
     return head;
 }
int main()
{
   int n,x,i,m,p,q;
   do{
    cout<<"1.Insert Value\n";
    cout<<"2.Add element"<<endl;
    cout<<"3.Print Element"<<endl;
    cout<<"4.Delete Element"<<endl;
    cout<<"5.Reverse Element"<<endl;
    cout<<"6.Exit"<<endl;
    cin>>m;
    switch(m)
    {
        case 1:
        cout<<"How may elements you want to add :";
   cin>>n;
   cout<<endl;
   cout<<"Enter the elements: ";
   for(i=0;i<n;i++)
   {
       cin>>x;
       Insert(x);

   } break;

        case 2: cout<<"Enter Value and Position of Element :";
            cin>>p>>q;
            AddElement(p,q);break;

    case 3:
   cout<<"Out put is :";
   show();break;
    case 4:cout<<"Enter the position Number to Delete: ";
    int n;
    cin>>n;
    Delete(n);break;
    case 5:head=reverse(head);
    cout<<"After Reversing "<<endl;
    show();
    break;
    case 6: return 0;
    }

   }
   while(m!=6);


}
