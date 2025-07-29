
// Problem link ===>> https://codeforces.com/problemset/problem/2126/E
// submission link ===>> https://codeforces.com/contest/2126/submission/331437898

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

long long lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
        return 0;
    return abs(a * b) / std::gcd(a, b);
}

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

        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        ll b[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];

        ll ans[n + 1];
        for (ll i = n; i >= 1; i--)
        {
            ans[i] = lcm(a[i], b[i]);
        }

        bool ch = 1;
        if (ans[1] != a[1])
            ch = 0;
        if (ans[n] != b[n])
            ch = 0;

        for (ll i = 2; i <= n; i++)
        {
            if (std::gcd(a[i - 1], ans[i]) != a[i])
            {
                ch = 0;
            }
        }

        for (ll i = n - 1; i >= 1; i--)
        {
            if (std::gcd(b[i + 1], ans[i]) != b[i])
            {
                ch = 0;
            }
        }

        if (ch)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}