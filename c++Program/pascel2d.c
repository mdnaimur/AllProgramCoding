#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, k ;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter k:\n");
    scanf("%d",&k);
    int pascal[n+1][n+1];
    int i,j ;
    for(i=0;i<n+1;++i){
        pascal[i][0] = 1 ;
        pascal[i][i] = 1 ;
    }

    for(i=2;i<n+1;++i){
        for(j=1;j<i;++j){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    printf("%d\n", pascal[n][k]);
    return 0 ;
}
