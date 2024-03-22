
// Problem link ===>> https://codeforces.com/problemset/problem/1941/A
// submission link ===>> https://codeforces.com/contest/1941/submission/252803974

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> b(n);
        for (ll i = 0; i < n; i++){
            cin >> b[i];
        }

        vector<ll> c(m);
        for (ll i = 0; i < m; i++){
            cin >> c[i];
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < m; j++){
                if((b[i]+c[j])<=k){
                    ans++;
                }
            }
        }
        cout << ans<<endl;
    }
    return 0;
}