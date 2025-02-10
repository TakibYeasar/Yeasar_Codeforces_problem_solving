
// Problem link ===>> https://codeforces.com/problemset/problem/2063/C
// submission link ===>> https://codeforces.com/contest/2063/submission/305459632

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> deg(n, 0);
        vector<vector<ll>> adj(n);

        // Input edges and build adjacency list
        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            u--, v--; // Convert to 0-based index
            deg[u]++;
            deg[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        multiset<ll> degreeSet(deg.begin(), deg.end()); // Store degrees in sorted order
        ll max_result = 0;

        // Iterate over each node
        for (ll i = 0; i < n; i++)
        {
            ll node_deg = deg[i];
            vector<ll> neighbor_deg;

            // Collect neighbor degrees
            for (ll v : adj[i])
            {
                neighbor_deg.push_back(deg[v]);
            }

            neighbor_deg.push_back(node_deg);
            sort(neighbor_deg.rbegin(), neighbor_deg.rend()); // Sort in descending order

            ll max_neigh = -1;
            vector<ll> removed;

            // Remove node's degrees temporarily from degreeSet
            for (ll d : neighbor_deg)
            {
                if (!degreeSet.empty() && *degreeSet.rbegin() == d)
                {
                    degreeSet.erase(prev(degreeSet.end()));
                    removed.push_back(d);
                }
            }

            // Get max remaining degree
            if (!degreeSet.empty())
            {
                max_neigh = max(max_neigh, *degreeSet.rbegin());
            }

            // Check max reduced degree of neighbors
            for (ll v : adj[i])
            {
                max_neigh = max(max_neigh, deg[v] - 1);
            }

            // Restore removed elements
            for (ll d : removed)
            {
                degreeSet.insert(d);
            }

            // Update maximum answer
            max_result = max(max_result, node_deg + max_neigh - 1);
        }

        cout << max_result << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
