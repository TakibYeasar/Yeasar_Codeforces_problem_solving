
// Problem link ===>> https://codeforces.com/problemset/problem/2107/B
// submission link ===>> https://codeforces.com/contest/2107/submission/320530063

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
        ll n, k;
        cin >> n>>k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        
        ll sum = accumulate(a.begin(), a.end(), 0LL);
        sort(a.begin(), a.end());
        a[n - 1]--;
        sort(a.begin(), a.end());

        if(a[n-1] - a[0] >k || sum % 2 ==0){
            cout << "Jerry" << endl;
            continue;
        }
        cout<< "Tom" << endl;
    }
    return 0;
}