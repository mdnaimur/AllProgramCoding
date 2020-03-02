#include<iostream>
#include<cstdio>
using namespace std;

struct Node{
	int data;
	Node* link;
	
};
Node *top=NULL;
void push(int x)
{
	Node* temp=new Node;
	temp->data=x;
	temp->link=top;
	top=temp;
}
void pop()
{
	Node *temp;
	if(top==NULL)return;
	temp=top;
	top=top->link;
	delete temp;
}
void Print() 
{     
struct Node* temp = top;     
while(temp!=NULL)   
 
 {         
printf("%d ",temp->data);        
 temp=temp->link;           
  }    
 printf("\n"); 
} 
int IsEmpty() 
{     if(top==NULL) 
        return 1;     
else         return 0;
 }
 int Top() 
{    
 return (top->data); 
}

int main() 
{     
push(5); Print();
     push(6); Print(); 
    push(7); Print(); 
    push(8); Print();     
pop(); Print();     
pop();
 Print();    
 pop(); Print();
    
 printf("%d ",Top());     
if(IsEmpty())         
printf("Empty!!");   
  else    
 printf("Nope");        
  return 0; 
  }
