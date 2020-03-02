#include <bits/stdc++.h>

using namespace std;
int cols,rows;
// Complete the connectedCell function below.
int findLargestRegion(vector <vector <int> > matrix, int row, int col) {
        /* Put boundary checks here (at top of recursive call), instead of before doing recursive call */
        if (row < 0 || row >= rows || col < 0 || col >= cols || matrix[row][col] == 0) {
            return 0;
        }

        matrix[row][col] = 0; // we alter the original matrix here
        int sizee = 1;       // 1 accounts for our size

        /* Recursively search neighbors */
        for (int r = row - 1; r <= row + 1; r++) {
            for (int c = col - 1; c <= col + 1; c++) {
                sizee += findLargestRegion(matrix, r, c);
            }
        }

        return sizee;
    }
int connectedCell(vector<vector<int> > matrix) {
 int i ,j;
     int maxRegion = 0;
    for(i=0;i<matrix.size();i++)
    {
        for(j=0;j<matrix.size();j++)
        {
            if(matrix[i][j]==1)
            {
                int sizee  = findLargestRegion(matrix, i, j);
                    maxRegion = max(maxRegion, sizee);
            }
        }

    }
   return maxRegion;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int> > matrix(n);
    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

    fout.close();

    return 0;
}

