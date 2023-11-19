
// Each test contains multiple test cases.The first line contains the number of test cases t(1≤t≤100).The description
// of the test cases follows.The first line of each test case contains a single integer n(2≤n≤500) —
// the length of the array a.The next line contains n integers a1,a2,…, an(1≤ai≤109) — the values of array a.
// It is guaranteed that the sum of n across all test cases does not exceed 500 .
// Output the minimum number of operations needed to make the array not sorted.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int dp[k + 1];
        dp[0] = 1;
        dp[1] = 1;
        for (int j = 2; j <= k; j++)
        {
            dp[j] = dp[j - 1] + dp[j - 2];
        }
        cout
            << dp[k] << endl;
    }
    return 0;
}