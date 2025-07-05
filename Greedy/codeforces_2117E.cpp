
// Problem link ===>> https://codeforces.com/problemset/problem/2117/E
// submission link ===>> https://codeforces.com/contest/2117/submission/326308648

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

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (ll &x : a)
        cin >> x;
    for (ll &x : b)
        cin >> x;

    vector<bool> seen(n + 1, false);

    if (a.back() == b.back())
    {
        cout << n << endl;
        return;
    }

    int ans = -1;
    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] == b[i] || a[i] == a[i + 1] || b[i] == b[i + 1] || seen[a[i]] || seen[b[i]])
        {
            ans = i;
            break;
        }

        seen[a[i + 1]] = true;
        seen[b[i + 1]] = true;
    }

    cout << ans + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
