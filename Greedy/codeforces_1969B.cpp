
// Problem link ===>> https://codeforces.com/problemset/problem/1969/A
// submission link ===>> https://codeforces.com/contest/1969/submission/260259483

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 3;
        for (int i = 1; i <= n; i++){
            if(i==v[v[i-1]-1]){
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}