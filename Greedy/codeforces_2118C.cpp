
// Problem link ===>> https://codeforces.com/problemset/problem/2118/C
// submission link ===>> https://codeforces.com/contest/2118/submission/325400570

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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += __builtin_popcountll(a[i]);
        }

        vector<ll> cost;
        for (int i = 0; i < n; ++i)
        {
            ll x = a[i];

            while (1)
            {
                ll req = ((x + 1) | x) - x;
                if (req > k)
                    break;
                cost.push_back(req);

                x |= (x + 1);
            }
        }

        sort(cost.begin(), cost.end());
        for (long long c : cost)
        {
            if (c <= k)
            {
                k -= c;
                ++ans;
            }
        }

        cout << ans << endl;
    }
    return 0;
}