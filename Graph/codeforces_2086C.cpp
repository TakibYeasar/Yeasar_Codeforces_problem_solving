
// Problem link ===>> https://codeforces.com/problemset/problem/2086/C
// submission link ===>> https://codeforces.com/contest/2086/submission/330852899

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

        vector<ll> p(n);
        for (ll i = 0; i < n; i++){
            cin >> p[i];
            p[i]--;
        }

        set<ll> X;
        for (ll i = 0; i < n; i++){
            ll d;
            cin >> d;
            d--;

            while (!X.contains(d))
            {
                X.insert(d);
                d = p[d];
            }

            cout<<X.size() << " ";
        }
        cout << endl;
    }
    return 0;
}