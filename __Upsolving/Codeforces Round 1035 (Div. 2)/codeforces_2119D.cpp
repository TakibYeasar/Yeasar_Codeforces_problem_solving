
// Problem link ===>> https://codeforces.com/contest/2119/problem/D
// submission link ===>> https://codeforces.com/contest/2119/submission/336534684

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

const int N = 5005;
int f[N][N];

// modular addition (to avoid overflow and keep values within mod)
inline void add(int &x, int y, int mod)
{
    x += y;
    if (x >= mod)
        x -= mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, mod;
        cin >> n >> mod;

        // reset DP
        f[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                f[i][j] = 0;
            }
        }

        // DP transitions
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0, now; j < i; j++)
            {
                if ((now = f[i - 1][j]))
                {
                    add(f[i][j + 1], now, mod);
                    f[i][j] = (f[i][j] + (ll)(n - i + 1) * (j + 1) % mod * now % mod) % mod;
                }
            }
        }

        // calculate answer
        int ans = 0;
        for (int j = 0; j <= n; j++)
        {
            add(ans, f[n][j], mod);
        }

        cout << ans << endl;
    }

    return 0;
}