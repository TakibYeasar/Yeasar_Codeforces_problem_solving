
// Problem link ===>> https://codeforces.com/contest/2131/problem/B
// submission link ===>> https://codeforces.com/contest/2131/submission/333666024

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
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        vector<ll> ans;
        for (ll i = 0; i < n / 2; i++)
        {
            ans.push_back(-1);
            ans.push_back(3);
        }

        if (n % 2 == 1)
        {
            ans.push_back(-1);
        }
        else
        {
            ans.back() = 2;
        }

        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
        }
    }

    return 0;
}