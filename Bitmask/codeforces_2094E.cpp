
// Problem link ===>> https://codeforces.com/problemset/problem/2094/E
// submission link ===>> https://codeforces.com/contest/2094/submission/318969714

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
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
        ll n;
        cin >> n;

        ll arr[n + 1];
        vector<ll> cnt(30, 0);

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            for (ll j = 0; j < 30; j++)
            {
                cnt[j] += ((arr[i] >> j) & 1);
            }
        }

        ll ans = 0;

        for (ll i = 1; i <= n; i++)
        {
            ll tot = 0;
            for (ll j = 0; j < 30; j++)
            {
                bool f = ((arr[i] >> j) & 1);
                if (f)
                    tot += (1 << j) * (n - cnt[j]);
                else
                    tot += (1 << j) * cnt[j];
            }
            ans = max(ans, tot);
        }
        cout << ans << endl;
    }
    return 0;
}