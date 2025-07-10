
// Problem link ===>> https://codeforces.com/problemset/problem/2123/E
// submission link ===>> https://codeforces.com/contest/2123/submission/328315849

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
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

        vector<ll> a(n), ans(n + 1), diff(n + 2);
        map<ll, ll> freq;

        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (ll i = 0; i <= n; i++)
        {
            diff[freq[i]]++;
            diff[n - i + 1]--;
            if (!freq[i])
                break;
        }

        for (ll k = 0; k <= n; k++)
        {
            ans[k] = (k ? ans[k - 1] : 0) + diff[k];
            cout << ans[k] << (k != n ? ' ' : '\n');
        }
    }
    return 0;
}