
// Problem link ===>> https://codeforces.com/problemset/problem/1879/B
// submission link ===>> https://codeforces.com/contest/1879/submission/241202860

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long h = 0;
        for (int i = 0; i < n; i++)
        {
            h += a[0] + b[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += b[0] + a[i];
        }
        cout << min(h, ans) << "\n";
    }

    return 0;
}