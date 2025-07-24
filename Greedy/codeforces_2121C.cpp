
// Problem link ===>> https://codeforces.com/problemset/problem/2121/C
// submission link ===>> https://codeforces.com/contest/2121/submission/330304010

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
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> a(n, vector<ll>(m));
        ll mx = 0, cnt_mx = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] > mx)
                {
                    mx = a[i][j];
                    cnt_mx = 1;
                }
                else if (a[i][j] == mx)
                {
                    cnt_mx++;
                }
            }
        }

        vector<ll> r(n), c(m);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] == mx)
                {
                    r[i]++;
                    c[j]++;
                }
            }
        }

        ll flag = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (r[i] + c[j] - (a[i][j] == mx) == cnt_mx)
                {
                    flag = 1;
                }
            }
        }
        cout << mx - flag << endl;
    }
    return 0;
}