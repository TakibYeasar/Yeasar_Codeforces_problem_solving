
// Problem link ===>> https://codeforces.com/problemset/problem/1941/C
// submission link ===>> https://codeforces.com/contest/1941/submission/252808710

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        int i = 0;
        while (i < n)
        {
            if (i <= n - 5 && s.substr(i, 5) == "mapie")
            {
                ans++;
                i += 5;
            }
            else if (i <= n - 3 && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
            {
                ans++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}