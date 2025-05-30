
// Problem link ===>> https://codeforces.com/problemset/problem/2092/C
// submission link ===>> https://codeforces.com/contest/2092/submission/315970140

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
        ll n;
        cin >> n;

        vector<int> a(n);
        ll ans = 0, cnt = 0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            ans += a[i];
            cnt += (a[i] & 1);
        }
        if (!cnt || cnt == n)
        {
            cout << *max_element(a.begin(), a.end()) << '\n';
        }
        else
        {
            cout << ans - cnt + 1 << '\n';
        }
    }
    return 0;
}