
// Problem link ===>> https://codeforces.com/contest/2158/problem/B
// submission link ===>> https://codeforces.com/contest/2158/submission/352268612

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

        vector<ll> a(2 * n);
        for (ll i = 0; i < 2 * n; i++){
            cin >> a[i];
        }

        vector<ll> cnt(2 * n + 1);
        for(auto &x : a){
            cnt[x]++;
        }

        ll x = 0, y = 0, z = 0;
        for (ll i = 1; i <= 2 * n; i++){
            if (cnt[i] == 0)
                continue;
            if (cnt[i] & 1)
                x++;
            else if (cnt[i] % 4)
                y++;
            else
                z++;
        }

        ll ans = x + 2 * y + 2 * z;
        if ((z & 1) && x == 0)
            ans -= 2;
        cout << ans << endl;
    }
    return 0;
}