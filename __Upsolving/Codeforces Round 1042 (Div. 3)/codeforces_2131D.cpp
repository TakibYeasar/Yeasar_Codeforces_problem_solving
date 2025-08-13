
// Problem link ===>> https://codeforces.com/contest/2131/problem/D
// submission link ===>> https://codeforces.com/contest/2131/submission/333816060

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
        ll n;
        cin >> n;

        vector<vector<ll>> g(n);
        vector<ll> deg(n, 0);

        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            u--;
            v--;
            g[u].push_back(v);
            g[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        if (n <= 3)
        {
            cout << 0 << "\n";
            continue;
        }

        ll c1 = 0;
        for (ll u = 0; u < n; u++)
        {
            if (deg[u] == 1)
                c1++;
        }

        ll mx = 0;
        for (ll u = 0; u < n; u++)
        {
            ll leafCount = 0;
            for (ll v : g[u])
            {
                if (deg[v] == 1)
                    leafCount++;
            }
            mx = max(mx, leafCount);
        }

        cout << (c1 - mx) << "\n";
    }

    return 0;
}