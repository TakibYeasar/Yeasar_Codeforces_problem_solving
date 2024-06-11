
// Problem link ===>> https://codeforces.com/problemset/problem/1985/B
// submission link ===>> https://codeforces.com/contest/1985/submission/265323309

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxSum = 0;
        int bestX = 2;

        for (int x = 2; x <= n; ++x)
        {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;

            if (sum > maxSum)
            {
                maxSum = sum;
                bestX = x;
            }
        }

        cout << bestX << endl;
    }
    return 0;
}