
// Problem link ===>> https://codeforces.com/contest/2148/problem/D
// submission link ===>> https://codeforces.com/contest/2148/submission/341501275

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
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<ll> p[2];
        for (ll i : a)
            p[i % 2].push_back(i);

        ll ans = 0;
        if (p[1].size())
            ans += accumulate(p[0].begin(), p[0].end(), 0LL);

        sort(p[1].rbegin(), p[1].rend());

        ll m = p[1].size();
        for (ll i = 0; i < (m + 1) / 2; i++)
            ans += p[1][i];

        cout << ans << endl;
    }
    return 0;
}