
// Problem link ===>> https://codeforces.com/problemset/problem/2108/C
// submission link ===>> https://codeforces.com/contest/2108/submission/319535346

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

        vector<int> a;
        a.push_back(-1e9);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (a.back() != x)
            {
                a.push_back(x);
            }
        }

        a.push_back(-1e9);

        int ans = 0;
        for (int i = 1; i < a.size() - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}