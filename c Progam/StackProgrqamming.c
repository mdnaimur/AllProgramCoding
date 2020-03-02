//Stack Programming
#include<stdio.h>
int size=8;
int stack[8];
int top=-1;
int isempty(){
        if(top ==-1)
            return 1;
        else
            return 0;
}
int isfull(){
if(top==size)
    return 1;
else
    return 0;
}
int peek(){
return stack[top];
}
int pop()
{
    int data;
    if(!isempty()){
        data=stack[top];
      top=top-1;
        return data;
    }
    else
    {
        printf("Could not retrieve data.Stack is empty!!\n");
    }
}
int push(int data)
{
    if(!isfull()){
        top=top+1;
        stack[top]=data;
    }
    else{
        printf("could not insert data.Stack is full!\n");
    }
}
int main()
{
    int i,n;

    printf("Enter the data : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&n);
        push(n);
    }
    printf("Element of top of the stack %d\n",peek());
    printf("Elements is :\n");
while(!isempty()) {
    int data = pop();
    printf("%d\n",data);
    }
    printf("Stack is full: %s\n",isfull()?"true":"false");
     printf("Stack is empty: %s\n",isempty()?"true":"false");
     return 0;
}
