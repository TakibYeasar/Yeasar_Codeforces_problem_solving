
// Problem link ===>> https://codeforces.com/problemset/problem/1931/D?locale=en
// submission link ===>> https://codeforces.com/contest/1931/submission/247519574

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    ll ans = 0;
    map<int, map<int, int>> mp;
    for (int i = 0; i < n; ++i)
    {
        ans += mp[a[i] % y][(x - a[i] % x) % x];
        mp[a[i] % y][a[i] % x]++;
    }
    cout << ans << '\n';
}

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
    }
    return 0;
}