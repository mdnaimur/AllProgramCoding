#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int c=0,d=0,e=0;
    int i,j;
  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          if((i&j)>c&&((i&j)<k)){c=i&j;}
          if((i|j)>d&&((i|j)<k)){d=i|j;}
          if((i^j)>e&&((i^j)<k)){e=(int)i^j;}
      }
  }
  printf("%d\n%d\n%d\n",c,d,e);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
