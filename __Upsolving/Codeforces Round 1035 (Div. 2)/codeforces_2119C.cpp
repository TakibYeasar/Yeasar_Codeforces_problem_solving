
// Problem link ===>> https://codeforces.com/contest/2119/problem/C
// submission link ===>> https://codeforces.com/contest/2119/submission/336518881

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
        ll n, l, r, k;
        cin >> n >> l >> r >> k;

        if (n % 2 == 1)
        {
            cout << l << endl;
            continue;
        }

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        ll res = 1;
        bool fl = 0;

        while (res <= r)
        {
            if (res > l)
            {
                fl = 1;
                if (k <= n - 2)
                    cout << l << endl;
                else
                    cout << res << endl;
                break;
            }
            res *= 2;
        }

        if (!fl)
            cout << -1 << endl;
    }

    return 0;
}