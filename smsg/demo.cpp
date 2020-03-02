#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findMax(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i = 1; i <= 2*n - 1; i++)
    {
        for (int j = 1; j <= 2*n - 1; j++)
        {
          printf("%d ", findMax(abs(i-n), abs(j-n))+1);
	/*+1 is needed since the distance at the center is 0*/
        }
        printf("\n");
    }
    return 0;
}
