
// Problem link ===>> https://codeforces.com/contest/2119/problem/B
// submission link ===>> https://codeforces.com/contest/2119/submission/334288525

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
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a > b)
        {
            if ((a ^ 1) == b)
            {
                cout << y << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            int totalMoves = b - a;
            int yMoves = ((b + 1) / 2) - ((a + 1) / 2);
            int xMoves = totalMoves - yMoves;

            if (y > x)
            {
                cout << 1LL * totalMoves * x << "\n";
            }
            else
            {
                cout << 1LL * xMoves * x + 1LL * yMoves * y << "\n";
            }
        }
    }
    return 0;
}