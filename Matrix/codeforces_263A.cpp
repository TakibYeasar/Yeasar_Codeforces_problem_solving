
// Problem link ===>> https://codeforces.com/problemset/problem/263/A
// submission link ===>> https://codeforces.com/contest/263/submission/209298457

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix[5][5];
    int row, col;

    // Read the matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];

            // Check if the current element is 1
            if (matrix[i][j] == 1)
            {
                // Calculate the minimum number of moves to center
                row = abs(i - 2);
                col = abs(j - 2);
            }
        }
    }

    // Calculate the total number of moves to center
    int moves = row + col;

    // Output the result
    cout << moves << endl;

    return 0;
}
