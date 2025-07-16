
// Problem link ===>> https://codeforces.com/problemset/problem/2121/D
// submission link ===>> https://codeforces.com/contest/2121/submission/329212520

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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j - 1] > a[j])
                {
                    swap(a[j - 1], a[j]);
                    ans.push_back({1, j});
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (b[j - 1] > b[j])
                {
                    swap(b[j - 1], b[j]);
                    ans.push_back({2, j});
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                ans.push_back({3, i + 1});
            }
        }

        cout << ans.size() << endl;
        for (auto [x, y] : ans)
        {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}