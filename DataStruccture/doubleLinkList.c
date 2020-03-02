
/* Doubly Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // global variable - pointer to head node.

//Creates a new Node and returns pointer to it.
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserts a Node at head of doubly linked list

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	//printf("Prv check %d\n",*(head->prev));
	newNode->next = head;
	printf("Next check %d\n",*newNode->next);
	head = newNode;
 }

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL)
        temp = temp->next; // Go To last Node
       // printf("tempu check  %d\n",*temp);
	temp->next = newNode;
	//printf("next er bapar %d\n",*temp->next);
	newNode->prev = temp;
	printf("New Node history %d\n",*newNode->prev);
}

//Prints all the elements in linked list in forward traversal order
void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order.
void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main() {

	/*Driver code to test the implementation*/
	head = NULL; // empty list. set head as NULL.

	// Calling an Insert and printing list both in forward as well as reverse direction.
	InsertAtTail(0); Print(); //ReversePrint();
	InsertAtTail(2); Print();// ReversePrint();
	//InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(4); Print(); //ReversePrint();
	InsertAtTail(6);Print();
/*InsertAtHead(2);//Print();
InsertAtHead(3);//Print();
InsertAtHead(4);//Print();
InsertAtHead(6);//Print();*/

}
