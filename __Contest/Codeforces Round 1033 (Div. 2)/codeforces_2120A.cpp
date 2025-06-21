
// Problem link ===>> https://codeforces.com/contest/2120/problem/A
// submission link ===>> https://codeforces.com/contest/2120/submission/325416651

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

bool canFormSquare(ll l1, ll b1, ll l2, ll b2, ll l3, ll b3)
{
    if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1)
        return true;

    if (b1 == b2 && b2 == b3 && l1 + l2 + l3 == b1)
        return true;

    if (b2 == b3 && b1 == b2 + b3 && l2 + l3 == l1 && l2 <= l1 && l3 <= l1)
        return true;

    if (l2 == l3 && l1 == l2 + l3 && b2 + b3 == b1 && b2 <= b1 && b3 <= b1)
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        vector<pair<ll, ll>> rects = {{l1, b1}, {l2, b2}, {l3, b3}};
        bool ok = false;

        sort(rects.begin(), rects.end(), [](auto &a, auto &b)
             { return a.first > b.first || (a.first == b.first && a.second > b.second); });

        auto [r1l, r1b] = rects[0];
        auto [r2l, r2b] = rects[1];
        auto [r3l, r3b] = rects[2];

        ok = canFormSquare(r1l, r1b, r2l, r2b, r3l, r3b);

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}