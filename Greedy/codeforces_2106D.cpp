
// Problem link ===>> https://codeforces.com/problemset/problem/2106/D
// submission link ===>> https://codeforces.com/contest/2106/submission/321385918

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define endl '\n'
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
const int INF = 1e9 + 5;
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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> b(m);
        for (ll i = 0; i < m; i++)
            cin >> b[i];

        vector<ll> backward_match(m);
        ll j = n - 1;
        for (ll i = m - 1; i >= 0; i--)
        {
            while (j >= 0 && a[j] < b[i])
                j--;
            backward_match[i] = j--;
        }

        vector<ll> forward_match(m);
        j = 0;
        for (ll i = 0; i < m; i++)
        {
            while (j < n && a[j] < b[i])
                j++;
            forward_match[i] = j++;
        }

        if (forward_match.back() < n)
        {
            cout << 0 << endl;
            continue;
        }

        ll ans = INF;
        for (ll i = 0; i < m; i++)
        {
            ll match_previous = (i == 0 ? -1 : forward_match[i - 1]);
            ll match_next = (i + 1 == m ? n : backward_match[i + 1]);
            if (match_next > match_previous)
            {
                ans = min(ans, b[i]);
            }
        }

        cout << (ans == INF ? -1 : ans) << endl;
    }

    return 0;
}