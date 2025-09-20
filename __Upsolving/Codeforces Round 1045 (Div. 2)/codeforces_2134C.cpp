
// Problem link ===>> https://codeforces.com/contest/2134/problem/C
// submission link ===>> https://codeforces.com/contest/2134/submission/337163281

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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> b(n + 1);
        ll ans = 0;

        for (ll i = 0; i < n; i += 2)
        {
            ll mn = a[i];
            if (i >= 2)
            {
                mn = min(mn, a[i - 1] - b[i - 2]);
            }
            if (i + 1 < n)
            {
                mn = min(mn, a[i + 1]);
            }
            b[i] = mn;
            ans += (a[i] - b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}