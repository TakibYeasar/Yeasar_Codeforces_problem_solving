
// Problem link ===>> https://codeforces.com/problemset/problem/2108/B
// submission link ===>> https://codeforces.com/contest/2108/submission/319916633

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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        ll bits = __builtin_popcountll(x);

        if (n <= bits)
        {
            cout << x << endl;
            continue;
        }

        if ((n - bits) % 2 == 0)
        {
            cout << x + (n - bits) << endl;
        }
        else
        {
            if (x > 1)
            {
                cout << x + (n - bits) + 1 << endl;
            }
            else if (x == 1)
            {
                cout << n + 3 << endl;
            }
            else
            {
                if (n == 1)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << n + 3 << endl;
                }
            }
        }
    }
    return 0;
}