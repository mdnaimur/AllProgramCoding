#include<iostream>
using namespace std;
#define size 256

static char stack[size];
int top=-1;

void push(char c){
stack[++top]=c;
}
void pop(){
stack[top--]='\0';
}
int main(){
register unsigned n,i;
unsigned char c;
cin>>n;
getchar();
    while(n--){
        stack[size]='\0';
        top=-1;
        unsigned error=0;
        char *par=new char[size+1];
        gets(par);
        for(i=0;par[i];i++){
            if(par[i]=' ')
            {
                continue;
            }
            if(par[i]=='['||par[i]=='(')
                push(par[i]);
            else if(par[i]==']'&&stack[top]=='[')
                pop();
            else if(par[i]==')'&&stack[top]=='(')
                pop();
            
        }
        if(error||top>-1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}

