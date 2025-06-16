
// Problem link ===>> https://codeforces.com/problemset/problem/2115/A
// submission link ===>> https://codeforces.com/contest/2115/submission/324658100

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

const int N = 5005;

int n, m, k;
int a[N], f[N], g[N][N];

void checkmax(int &x, int y)
{
    if (y > x)
        x = y;
}

void checkmin(int &x, int y)
{
    if (y < x)
        x = y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    // Precompute GCD transitions
    for (int x = 0; x < N; ++x)
    {
        g[x][0] = g[0][x] = g[x][x] = x;
    }
    for (int x = 1; x < N; ++x)
    {
        for (int y = 1; y < x; ++y)
        {
            g[x][y] = g[y][x] = g[y][x % y];
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        m = k = 0;

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            k = g[k][a[i]];
        }

        memset(f, 0x3f, sizeof(f));

        for (int i = 1; i <= n; ++i)
        {
            a[i] /= k;
            checkmax(m, a[i]);
            f[a[i]] = 0;
        }

        for (int x = m; x >= 1; --x)
        {
            for (int i = 1; i <= n; ++i)
            {
                int y = a[i];
                checkmin(f[g[x][y]], f[x] + 1);
            }
        }

        int ans = max(f[1] - 1, 0);
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] > 1)
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}