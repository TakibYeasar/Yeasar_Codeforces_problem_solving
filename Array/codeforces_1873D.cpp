// The first line contains a single integer t(1≤t≤1000) — the number of test cases.
// The first line of each test case contains two integers n
// and k(1≤k≤n≤2⋅105) — the length of the paper and the integer used in the operation.
// The second line of each test case contains a string s of length n
// consisting of characters B(representing a black cell) or W(representing a white cell).
// The sum of n over all test cases does not exceed 2⋅105 .
// For each test case, output a single integer — the minimum number of operations needed to remove all black cells.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i <= n; i++)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    int t;
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        int k;
        cin >> k;

        int left = 0;
        int right = n - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (s[mid] <= k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << right + 1 << endl;
    }
    return 0;
}