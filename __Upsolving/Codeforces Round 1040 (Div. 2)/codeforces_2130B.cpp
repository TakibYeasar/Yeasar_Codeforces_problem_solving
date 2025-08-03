
// Problem link ===>> https://codeforces.com/contest/2130/problem/B
// submission link ===>> https://codeforces.com/contest/2130/submission/332121350

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
        ll n, k, tmp;
        cin >> n >> k;
        vector<ll> a(3);
        for (ll i = 0; i < n; i++)
        {
            cin >> tmp;
            a[tmp]++;
        }

        if(k == a[1] + 2*a[2] || k >= a[1] + 2*a[2] + 2)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < a[0]; i++)
            cout << 0 << ' ';
        for (int i = 0; i < a[2]; i++)
            cout << 2 << ' ';
        for (int i = 0; i < a[1]; i++)
            cout << 1 << ' ';
        cout << endl;
    }
    return 0;
}