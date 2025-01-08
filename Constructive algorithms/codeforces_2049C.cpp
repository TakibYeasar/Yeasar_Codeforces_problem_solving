
// Problem link ===>> https://codeforces.com/problemset/problem/2049/C
// submission link ===>> https://codeforces.com/contest/2049/submission/300157568

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        --x;
        --y;

        vector<int> ans(n);
        for (ll i = 0; i < n; ++i)
        {
            ans[(x + i) % n] = i % 2;
        }

        if (n % 2 || (x - y) % 2 == 0)
        {
            ans[x] = 2;
        }

        for (auto num : ans)
        {
            cout << num << ' ';
        }
        cout << endl;
    }
    return 0;
}