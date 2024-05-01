
// Problem link ===>> https://codeforces.com/problemset/problem/1941/B
// submission link ===>> https://codeforces.com/contest/1941/submission/252807960

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n - 2; i++){
            if(a[i]==0){
                continue;
            }
            else if(a[i]<0){
                cout << "NO" << endl;
            } else {
                a[i + 1] -= 2 * a[i];
                a[i + 2] -= a[i];
            }
        }
        if (a[n - 2] == 0 && a[n - 1] == 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}