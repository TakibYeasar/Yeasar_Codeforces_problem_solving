
// Problem link ===>> https://codeforces.com/problemset/problem/2126/D
// submission link ===>> https://codeforces.com/contest/2126/submission/331606645

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
        ll n, k;
        cin >> n >> k;

        pair<ll, pair<ll, ll>> p[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> p[i].first >> p[i].second.first >> p[i].second.second;
        }
        sort(p + 1, p + n + 1);
        ll curr = k;
        for (ll i = 1; i <= n; i++){
            if(p[i].first> curr){
                break;
            }
            curr = max(curr, p[i].second.second);
        }
        cout<< curr << endl;
    }
    return 0;
}