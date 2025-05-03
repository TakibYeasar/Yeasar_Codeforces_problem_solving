
// Problem link ===>> https://codeforces.com/problemset/problem/2096/B
// submission link ===>> https://codeforces.com/contest/2096/submission/316707801

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
// Constants
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map_mul = tree<
    K, V, less_equal<K>, rb_tree_tag, tree_order_statistics_node_update>;


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
        cin >> n>>k;
        ll m = k - 1;

        vector<ll> l(n), r(n);
        for (ll i = 0; i < n; i++){
            cin >> l[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> r[i];
        }

        vector<ll> a(n), b(n);
        ll y = 0;
        for (ll i = 0; i < n; i++){
            a[i] = max(l[i], r[i]);
            b[i] = min(l[i], r[i]);
            y += a[i];
        }

        sort(b.begin(), b.end(), greater<>());
        for (ll i = 0; i < m; i++)
        {
            y += b[i];
        }

        ll x = y + 1;
        cout << x << endl;
    }
    return 0;
}