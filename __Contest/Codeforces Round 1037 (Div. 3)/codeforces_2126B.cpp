
// Problem link ===>> https://codeforces.com/contest/2126/problem/B
// submission link ===>> https://codeforces.com/contest/2126/submission/329420279

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
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll count = 0;
        ll i = 0;

        while (i <= n - k)
        {
            bool possible = true;
            for (ll j = 0; j < k; ++j)
            {
                if (a[i + j] == 1)
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                ++count;
                i += k + 1;
            }
            else
            {
                ++i;
            }
        }
        cout << count << endl;
    }
    return 0;
}