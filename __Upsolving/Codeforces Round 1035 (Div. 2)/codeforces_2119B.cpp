
// Problem link ===>> https://codeforces.com/contest/2119/problem/B
// submission link ===>> https://codeforces.com/contest/2119/submission/334560785

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

#define N 100010
ll t, n, sx, sy, tx, ty;
double a[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n >> sx >> sy >> tx >> ty;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        a[++n] = sqrt((sx - tx) * (sx - tx) + (sy - ty) * (sy - ty));

        sort(a + 1, a + n + 1);

        double sum = a[n];
        for (ll i = 1; i < n; i++)
        {
            sum -= a[i];
        }

        cout << (sum <= 0 ? "Yes" : "No") << endl;
    }

    return 0;
}