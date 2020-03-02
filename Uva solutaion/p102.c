#include<stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
int bottles [9 + 3];

int count_movement (int a, int b, int c)
{
    int i;
    int m = 0;
    for (  i = 0; i < 9; i++ ) {
        if ( i != a && i != b && i != c )
            m += bottles [i];
    }

    return m;
}

int main ()
{
    int i;
    while ( scanf ("%d", &bottles [0]) != EOF ) {

        for (  i = 1; i < 9; i++ )
            scanf ("%d", &bottles [i]);

        char output_str [3 + 3];
        int movements [6];
        int min_movement = INT_MAX;
        char combinations [6] [3 + 2] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

        // Brown index : 0 3 6
        // Green index : 1 4 7
        // Clear index : 2 5 8

        movements [0] = count_movement (0, 5, 7); // BCG
        movements [1] = count_movement (0, 4, 8); // BGC
        movements [2] = count_movement (2, 3, 7); // CBG
        movements [3] = count_movement (2, 4, 6); // CGB
        movements [4] = count_movement (1, 3, 8); // GBC
        movements [5] = count_movement (1, 5, 6); // GCB

        for (  i = 0; i < 6; i++ ) {
            if ( movements [i] < min_movement ) {
                min_movement = movements [i];
                strcpy (output_str, combinations [i]);
            }
        }

        printf ("%s %d\n", output_str, min_movement);

    }

    return 0;
}
