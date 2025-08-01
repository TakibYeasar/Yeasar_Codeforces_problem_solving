
// Problem link ===>> https://codeforces.com/problemset/problem/2114/E
// submission link ===>> https://codeforces.com/contest/2114/submission/331737891

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

const int MAXN = 2e5 + 5;
vector<int> gr[MAXN];
vector<ll> arr(MAXN);
vector<ll> res(MAXN);

void dfs(int v, int p, ll mini, ll maxi)
{
    res[v] = max(arr[v], -mini + arr[v]);
    ll new_min = min(arr[v], -maxi + arr[v]);
    for (int u : gr[v])
    {
        if (u == p)
            continue;
        dfs(u, v, new_min, res[v]);
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
        ll n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            gr[i].clear();
        }

        for (int i = 0; i < n - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            --u, --v;
            gr[u].push_back(v);
            gr[v].push_back(u);
        }

        res.assign(n, 0);
        dfs(0, -1, 0, 0);

        for (int i = 0; i < n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}