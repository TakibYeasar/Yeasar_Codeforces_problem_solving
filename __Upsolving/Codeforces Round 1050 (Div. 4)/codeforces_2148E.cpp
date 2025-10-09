
// Problem link ===>> https://codeforces.com/contest/2148/problem/E
// submission link ===>> https://codeforces.com/contest/2148/submission/342011896

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

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), cnt(n + 1), b(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (ll i = 0; i <= n; i++)
    {
        if (cnt[i] % k != 0)
        {
            cout << 0 << endl;
            return;
        }
        cnt[i] /= k;
    }

    ll res = 0;
    for (ll l = 0, r = 0; r < n; r++)
    {
        b[a[r]]++;
        while (b[a[r]] > cnt[a[r]])
        {
            b[a[l]]--;
            l++;
        }
        res += (r - l + 1);
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}