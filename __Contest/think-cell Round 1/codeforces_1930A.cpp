#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> a[i];
        }

        // Sort the array in ascending order
        sort(a.begin(), a.end());

        // Initialize the score
        int score = 0;

        // Select the two smallest integers in each move
        for (int i = 0; i < n; ++i)
        {
            score += a[i];
        }

        cout << score << endl;
    }

    return 0;
}
