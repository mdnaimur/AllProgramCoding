#include<stdio.h>
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
unsigned n,i;
unsigned char c;
scanf("%u",&n);
getchar();
    while(n--){
        stack[size]='\0';
        top=-1;
        unsigned error=0;
        char par[size];
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
            else{
                error=1;
                break;
            }
        }
        if(error||top>-1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
