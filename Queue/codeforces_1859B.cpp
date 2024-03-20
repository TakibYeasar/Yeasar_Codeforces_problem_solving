
// Problem link ===>> https://codeforces.com/problemset/problem/1859/B
// submission link ===>> https://codeforces.com/contest/1859/submission/241197038

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int q;
    cin >> q;

    int overallMin = INT_MAX; // Use INT_MAX for simplicity
    vector<pair<int, int>> minPairs;

    for (int k = 0; k < q; k++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
            if (pq.size() > 2)
            {
                pq.pop();
            }
            overallMin = min(overallMin, a[i]);
        }

        int minOne = pq.top();
        pq.pop();
        int minTwo = pq.top();
        minPairs.push_back({minTwo, minOne});
    }

    long long int sum = 0;
    int currentMin = INT_MAX;
    for (const auto &[minTwo, minOne] : minPairs)
    {
        sum += minOne;
        currentMin = min(currentMin, minOne);
    }

    sum += overallMin;
    sum -= currentMin;
    cout << sum << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
