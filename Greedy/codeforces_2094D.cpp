
// Problem link ===>> https://codeforces.com/problemset/problem/2094/D
// submission link ===>> https://codeforces.com/contest/2094/submission/319068669

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld = long double
#define endl '\n'
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        string p, s;
        cin >> p >> s;
        int n = p.size(), m = s.size();

        if (m < n || m > 2 * n || p[0] != s[0])
        {
            cout << "NO" << endl;
            continue;
        }

        vector<ll> a, b;
        ll cnt = 1;

        for (ll i = 1; i < n; i++)
        {
            if (p[i] != p[i - 1])
            {
                a.push_back(cnt);
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        a.push_back(cnt);

        cnt = 1;
        for (ll i = 1; i < m; i++)
        {
            if (s[i] != s[i - 1])
            {
                b.push_back(cnt);
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        b.push_back(cnt);

        if (a.size() != b.size())
        {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] > b[i] || a[i] * 2 < b[i])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}