
// The input consists of five lines, each line contains five integers : the j - th integer in the i - th line of the input
// represents the element of the matrix that is located on the intersection of the i - th row and the j - th column.It is
// guaranteed that the matrix consists of 24 zeroes and a single number one.
// Print a single integer — the minimum number of moves needed to make the matrix beautiful.

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
