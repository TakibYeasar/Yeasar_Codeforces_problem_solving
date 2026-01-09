
// Problem link ===>> https://codeforces.com/contest/2158/problem/C
// submission link ===>> https://codeforces.com/contest/2158/submission/352703235

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
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        k &= 1;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<ll> l(n);
        for (ll i = 0; i < n; i++)
        {
            l[i] = (i && l[i - 1] > 0 ? l[i - 1] : 0ll) + a[i];
        }

        vector<ll> r(n);
        for (ll i = n - 1; i >= 0; i--)
        {
            r[i] = (i + 1 < n && r[i + 1] > 0 ? r[i + 1] : 0ll) + a[i];
        }

        if (k == 0)
        {
            ll ans = *max_element(l.begin(), l.end());
            cout << ans << endl;
        }
        else
        {
            ll ans = LONG_MIN;
            for (ll i = 0; i < n; i++)
            {
                ans = max(ans, l[i] + r[i] - a[i] + b[i]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}