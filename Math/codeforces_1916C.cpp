
// Problem link ===>> https://codeforces.com/problemset/problem/1916/C
// submission link ===>> https://codeforces.com/contest/1916/submission/241700791

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        long long ans = 0;
        int even = 0, odd = 0, v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans += x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
            v = odd / 3;
            if (even == 0 and odd == 1)
            {
                v = 0;
            }
            else if (odd % 3 == 1)
            {
                v = (odd + 2) / 3;
            }
            cout << ans - v << " ";
        }
        cout << '\n';
    }
    return 0;
}