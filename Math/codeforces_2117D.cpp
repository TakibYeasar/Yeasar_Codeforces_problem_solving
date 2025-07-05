
// Problem link ===>> https://codeforces.com/problemset/problem/2117/D
// submission link ===>> https://codeforces.com/contest/2117/submission/327394206

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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll diff = a[1] - a[0];
        bool bad = 0;

        for (ll i = 2; i < n; i++)
        {
            if (a[i] - a[i - 1] != diff)
            {
                bad = 1;
            }
        }

        if (bad)
        {
            cout << "NO" << endl;
            continue;
        }

        for (ll i = 0; i < n; i++)
        {
            a[i] = a[i] + (diff < 0 ? diff * (n - i) : -diff * (i + 1));
        }

        cout << (a[0] >= 0 && a[0] % (n + 1) == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}