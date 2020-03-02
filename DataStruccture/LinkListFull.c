 #include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
struct Node* head;
struct Node* reverse(struct Node* head);
void Delete(int n);
void Insert(int a)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=a;
    temp->next=head;
    head=temp;



}
void show()
{
    struct Node* temps=head;
    printf("\n#Head->");
    while(temps!=NULL)
    {
        printf("[%d]=>",temps->data);
        temps=temps->next;
    }
    printf("[NULL]\n");
}
void AddElement(int value,int position)
{
    int i;
   struct Node *tempOne=(struct Node*)malloc(sizeof(struct Node));
   tempOne->data=value;
   tempOne->next=NULL;
   if(position==1)
   {
       tempOne->next=head;
       head=tempOne;
       return;
   }
   struct Node* tempTwo;
   tempTwo=head;
   for( i=2;i<position;i++)
   {
       tempTwo=tempTwo->next;
   }
   tempOne->next=tempTwo->next;
   tempTwo->next=tempOne;

}
int main()
{
    int x,n,i;
    printf("How many number you want to linkUp: ");
    scanf("%d",&x);
    printf("\nEnter the number: ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&n);
        Insert(n);
        //show();
    }
    printf("\n\nFinal Output: \n");
    show();
   /*
    printf("\n\nEnter Element and Position to Add: ");
    int e,p;
    scanf("%d %d",&e,&p);
    AddElement(e,p);
    printf("\n\nAfter adding value : \n");
    show();

    printf("\nEnter the position you want to Delete: ");
    int f;
    scanf("%d",&f);
    Delete(f);
    printf("After Deleting \n");
    show();*/

//head=show();
   head= reverse(head);
    printf("\n\nAfter Reversing \n ");
    show();
    return 0;

}
void Delete(int n)
{
    struct Node* temp;
    temp=head;
    if(n==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp=temp->next;
    }
    struct Node* temp1;
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}
struct Node* reverse(struct Node* head)
{
    struct Node *current,*prev,*next;

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
