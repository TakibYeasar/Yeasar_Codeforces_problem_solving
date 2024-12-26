
// Problem link ===>> https://codeforces.com/problemset/problem/2052/A
// submission link ===>>

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1); // Use 1-based indexing as in the original code
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> ans;

    // Ascending sort and record overtakes
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ans.push_back({a[j], a[j + 1]});
            }
        }
    }

    // Descending sort and record overtakes
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ans.push_back({a[j], a[j + 1]});
            }
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (const auto &p : ans)
    {
        cout << p.second << " " << p.first << endl; // Note the order: y x
    }

    return 0;
}