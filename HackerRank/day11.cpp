#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int m[6][6];

    // Read 2D Matrix-Array
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            std:: cin >> m[i][j];
        }
    }

    // Compute the sum of hourglasses
    long temp_sum = 0, MaxSum = LONG_MIN;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {

            if (j + 2 < 6 && i + 2 < 6) {
                    //cout<<" "<<m[i][j];
                temp_sum = m[i][j] + m[i][j + 1] + m[i][j + 2] + m[i + 1][j + 1] + m[i + 2][j] + m[i + 2][j + 1] + m[i + 2][j + 2];
               // cout<<" |"<<temp_sum<<"|";
                if (temp_sum >= MaxSum) {
                    MaxSum = temp_sum;
                }
            }
        }
        //cout<<endl;
    }
    cout<<MaxSum<<endl;
   // fprintf(stderr, "%ld\n", MaxSum);

    return 0;
}
