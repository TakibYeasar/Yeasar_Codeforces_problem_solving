
// Problem link ===>> https://codeforces.com/problemset/problem/2123/C
// submission link ===>> https://codeforces.com/contest/2123/submission/328671687

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
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> mp;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < mn)
            {
                mn = a[i];
                mp[a[i]] = 1;
            }
        }

        int mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > mx)
            {
                mx = a[i];
                mp[a[i]] = 1;
            }
        }

        for (auto it : a)
            cout << mp[it];

        cout << '\n';
    }

    return 0;
}