
// Problem link ===>> https://codeforces.com/contest/2148/problem/B
// submission link ===>> https://codeforces.com/contest/2148/submission/341194321

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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        ll s;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> s;
        }

        cout << (n + m) << endl;
    }
    return 0;
}