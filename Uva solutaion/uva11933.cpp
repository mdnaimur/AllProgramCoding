#include<cstdio>
#include<iostream>
 
using namespace std;
 
int n, a, b;
 
int main() {
    for(;;) {
        scanf("%d", &n);
        if(n == 0) break;
 
        int i = 0, j = 0; // index, number of ones
        a = 0, b = 0;
        while(n > 0) {
            if(1 & n) {
                if(j % 2) {
                    b |= 1 << i;
                    cout<<"B is "<<b<<endl;
                } else {
                    a |= 1 << i;
                    cout<<"A is "<<a<<endl;
                }
                j++;
            }
            i++;
            n = n >> 1;
        }
 
        printf("%d %d\n", a, b);
    }
}
