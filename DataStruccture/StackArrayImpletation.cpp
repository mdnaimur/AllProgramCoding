#include<cstdio>
#include<iostream>
using namespace std;

#define MAX_SIZE 101
 int A [MAX_SIZE];
int top=-1;
void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        printf("Error!!:Stack Overflow\n");
        return;
    }
    A[++top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("Error!!: Stack is Underflow\n");
        return;
    }
    top--;
}
int Top()
{
    return A[top];
}
void print()
{
    int i;
    cout<<"Stack :";
    for(i=0;i<=top;i++)
    cout<<" "<<A[i];
    cout<<endl;
}

int main()
{
   cout<<"How many no. you want to push :";
    int i,n,NO;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter the Push Number : ";
        cin>>NO;
        push(NO);
    }
    cout<<"After the push operation is completed "<<endl;
    print();
    pop();
    print();
    pop();
    print();
    /*push(2);print();
    push(4);print();
    push(6);print();
    push(12);print();
    pop();print();*/
    return 0;

}
