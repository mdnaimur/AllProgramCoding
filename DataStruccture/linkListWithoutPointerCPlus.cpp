#include <iostream>
#include <string>

using namespace std;

struct node {
   int data;
   int prev;
   int next;

   // Constructor: 
   node() {
      data = -1;
      prev = -1;
      next = -1;
   }
};

node A[100];    // Array of nodes used to simulate the linked list      
int slot = 1;   // Array index of the next free space (beginning from index 1 initially)
int head = -1;  // Array index of the starting element in the list (-1 implies no entries yet)
int tail = -1;  // Array index of the tail in the list
int elements = 0;   // Number of elements in the list

// Function prototypes:
void insert(int);
void insertAfter(int,int);
void deleteElement(int);
void reverse();
void print();
int findIndex(int);


int main() {
    int a, b;
    char c;
    cout << "Please input the instructions (enter 'E' to exit): \n";


    do {
        cin >> c;
        switch(c) {
                case 'A':   cin >> a;
                            insert(a);
                            break;
                case 'I':   cin >> a >> b;
                            insertAfter(a,b);
                            break;
                case 'D':   cin >> a;
                            deleteElement(a);
                            break;
                case 'R':   reverse();
                            cout << "\nLinked list successfully reversed\n\n"; 
                            break;                      
                case 'T':   print();
                            break;
                case 'E':   cout << "\nExiting program...\n\n";
                            break;            
                default:    cout << "\nInvalid input entered\n\n";          
        }

    } while (c != 'E');

    return 0;
}


void insert(int value) {
    if (slot == -1) {
        cout << "\nNo free space available.\n\n";
    } else {
        elements++;
        A[slot].data = value;
        A[slot].next = 0;
        if (head == -1) {
            // If the list is empty prior to the insertion
            A[slot].prev = 0;
            head = slot;
            tail = slot;
        } else {
            A[tail].next = slot;
            A[slot].prev = tail; 
            tail = slot;    
        }
        cout << endl << "Element \'" << value << "\'"<< " successfully inserted\n\n";


        // Finding the index of the next free location:
        do {
            do {
                slot = (slot + 1) % 100;
            } while(slot == 0); 
            if (A[slot].next == -1) return;
        } while(slot != tail);
        slot = -1;
        cout << "\nNo more free space available. Please delete some elements before inserting new.\n\n";
    }   
}


void insertAfter(int value1,int value2) {
    if (slot == -1) {
        cout << "\nNo free space available.\n\n";
    } else {
        int predecessor = findIndex(value1);

        if (predecessor == -1) {
            cout << "\nElement " << value1 << " not found\n\n";
            return;
        }

        if (A[predecessor].next == 0) {
            // If value1 is the last element in the list
            insert(value2);
            return;
        }

        elements++;
        A[slot].data = value2;
        A[slot].prev = predecessor;
        A[slot].next = A[predecessor].next;
        A[A[predecessor].next].prev = slot;
        A[predecessor].next = slot;
        cout << endl << "Element \'" << value2 << "\'"<< " successfully inserted\n\n";

        // Finding the index of the next free location:
        int temp = slot;
        do {
            do {
                slot = (slot + 1) % 100;
            } while(slot == 0); 
            if (A[slot].next == -1) return;
        } while(slot != temp);
        slot = -1;
        cout << "\nNo more free space available. Please delete some elements before inserting new.\n\n";
    }   
}


void deleteElement(int value) {
    if (head == -1) {
        cout << "\nNo elements to delete.\n\n";
        return;
    }

    if (elements == 1) {
        // Deleting the only element in the list
        A[head].data = -1;
        A[head].prev = -1;
        A[head].next = -1;
        head = -1;
        elements--;
        return;
    }

    int index = findIndex(value); 

    if (index == -1) {
        cout << "\nElement not found.\n\n";
        return;
    }

    if (index == head) {
        // Deleting the first element in the list
        int successor = findIndex(A[A[index].next].data);
        A[successor].prev = 0;
        head = successor;       
        A[index].data = -1;
        A[index].prev = -1;
        A[index].next = -1; 
        cout << endl << "Element \'" << value << "\'"<< " successfully deleted\n\n";
        elements--;                 
        return;
    }

    if (index == slot) {    
        // Deleting the last element in the list
        int predecessor = findIndex(A[A[index].prev].data);
        A[predecessor].next = 0;        
        A[index].data = -1;
        A[index].prev = -1;
        A[index].next = -1; 
        cout << endl << "Element \'" << value << "\'"<< " successfully deleted\n\n";
        elements--;
        return; 
    }

    int successor = findIndex(A[A[index].next].data);
    int predecessor = findIndex(A[A[index].prev].data);
    A[predecessor].next = successor;
    A[successor].prev = predecessor;
    A[index].data = -1;
    A[index].prev = -1;
    A[index].next = -1;
    cout << endl << "Element \'" << value << "\'"<< " successfully deleted\n\n";
    elements--;                     
}

void reverse() {
    int i = head;
    tail = head;
    int temp;
    int hold;
    while (i != 0) {
        hold = i;
        i = A[i].next;

        //swap the previous and next data members to reverse the list:
        temp = A[hold].prev;
        A[hold].prev = A[hold].next;
        A[hold].next = temp;
    }
    head = hold;    
}


void print() {
    cout << "\nThe current list is: ";
    int i = head;
    while (i != 0) {
        cout << A[i].data << " ";
        i = A[i].next;
    }
    cout << endl << endl;
}


int findIndex (int x) {
    // A helper function to return the index of the element x in A
    int i = head;
    while (i != 0) {
        if (A[i].data == x) {
            return i;
        }
        i = A[i].next;
    }
    return (-1);
}
