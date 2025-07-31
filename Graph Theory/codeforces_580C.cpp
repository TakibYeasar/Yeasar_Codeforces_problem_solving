
// Problem link ===>> https://codeforces.com/contest/580/problem/C
// submission link ===>>

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

#define N 100005
vector<ll> adj[N];
int cat[N];

int n, m;
int ans = 0;

void dfs(int u, int p, int cnt)
{
    int c;
    if (cat[u] == 1)
    {
        c = cnt + 1;
    }
    else
    {
        c = 0;
    }

    if (c > m)
        return;

    if (adj[u].size() == 1 && u != 1)
    {
        ans++;
    }

    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        }

        dfs(v, u, c);
    }
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
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> cat[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0, 0);

        cout << ans << endl;
    }
    return 0;
}