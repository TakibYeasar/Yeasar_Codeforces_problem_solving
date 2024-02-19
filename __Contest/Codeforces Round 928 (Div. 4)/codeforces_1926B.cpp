#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Size of the grid

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i]; // Read each row of the grid
        }

        bool isSquare = true;
        bool isTriangle = true;

        // Check if all 1s form a square
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                {
                    if (i > 0 && grid[i - 1][j] != '1')
                    {
                        isSquare = false;
                    }
                    if (j > 0 && grid[i][j - 1] != '1')
                    {
                        isSquare = false;
                    }
                }
                else
                {
                    isTriangle = false;
                }
            }
        }

        // Output the result
        if (isSquare)
        {
            cout << "SQUARE" << endl;
        }
        else if (isTriangle)
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
