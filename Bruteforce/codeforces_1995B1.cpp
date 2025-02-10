
// Problem link ===>> https://codeforces.com/problemset/problem/1995/B1
// submission link ===>>

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

long long pow_mod(long long x, long long q, long long mod)
{
    if (q == 0)
        return 1;
    long long i = pow_mod(x, q / 2, mod);
    if (q % 2 == 0)
        return (i * i) % mod;
    return (i * i * x) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        map<int, int> hs;
        for (int x : a)
        {
            hs[x]++;
        }
        long long ans = 0;
        for (auto &[x, y] : hs)
        {
            int l = min(m / x, y);
            ans = max(ans, (long long)l * x);
            if (hs.find(x + 1) == hs.end())
                continue;
            int z = hs[x + 1];
            for (int i = 1; i <= y; ++i)
            {
                if (i * x > m)
                    break;
                int du = m - i * x;
                long long su = min(du / (x + 1), z) * (x + 1) + i * x;
                ans = max(ans, su);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
