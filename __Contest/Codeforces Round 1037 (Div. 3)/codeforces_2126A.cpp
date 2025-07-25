
// Problem link ===>> https://codeforces.com/contest/2126/problem/A
// submission link ===>> https://codeforces.com/contest/2126/submission/329398737

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

bool hasCommonDigit(ll x, ll y)
{
    set<char> dx, dy;
    for (char c : to_string(x))
        dx.insert(c);
    for (char c : to_string(y))
    {
        if (dx.count(c))
            return true;
    }
    return false;
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
        ll x;
        cin >> x;

        for (ll y = 0;; y++)
        {
            if (hasCommonDigit(x, y))
            {
                cout << y << endl;
                break;
            }
        }
    }

    return 0;
}