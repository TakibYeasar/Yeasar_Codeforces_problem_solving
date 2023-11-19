// The first line contains a single integer t(1≤t≤104) — the number of test cases.
// The first line of each test case contains a single integer n(1≤n≤3⋅105).
// The second line contains n integers a1, a2,…, an(1≤ai≤109). The third line contains n integers b1,
// b2,…, bn(1≤bi≤109). The sum of n over all test cases doesn't exceed 3⋅105 .
// For each test case, print a single integer — the minimum possible total cost of putting chips according to the rules.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> board(n);

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    int odd_rows = 0, even_rows = 0, odd_cols = 0, even_cols = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '1')
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                        even_rows++;
                    else
                        odd_cols++;
                }
                else
                {
                    if (j % 2 == 0)
                        odd_rows++;
                    else
                        even_cols++;
                }
            }
        }
    }

    int total_moves = 0;
    if (n % 2 == 0)
    {
        total_moves = max(odd_rows, even_rows) + max(odd_cols, even_cols);
    }
    else
    {
        total_moves = odd_rows + even_rows + odd_cols + even_cols;
        total_moves = min(total_moves, n * m - total_moves);
    }

    cout << total_moves << endl;

    return 0;
}
