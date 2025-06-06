
// Problem link ===>> https://codeforces.com/problemset/problem/2093/C
// submission link ===>> https://codeforces.com/contest/2093/submission/319399125

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

bool is_prime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
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
        ll x, k;
        cin >> x >> k;

        if (k > 1 && x > 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 1)
        {
            cout << (is_prime(x) ? "YES" : "NO") << endl;
        }
        else
        {
            cout << ((k == 2) ? "YES" : "NO") << endl;
        }
    }
    return 0;
}