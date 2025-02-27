
// Problem link ===>> https://codeforces.com/problemset/problem/2069/C
// submission link ===>> https://codeforces.com/contest/2069/submission/308126996

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 998244353;
int add (int x, int y){
    x += y;
    if(x >= MOD)
        x -= MOD;
    return x;
}

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

        vector<int> dp(4, 0);
        dp[0] = 1;

        while (n--)
        {
            int x;
            cin >> x;
            if (x == 2)
                dp[x] = add(dp[x], dp[x]);
            dp[x] = add(dp[x], dp[x - 1]);
        }
        cout << dp[3] << '\n';
    }
    return 0;
}