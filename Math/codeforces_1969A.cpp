
// Problem link ===>> https://codeforces.com/problemset/problem/1969/B
// submission link ===>>https://codeforces.com/contest/1969/submission/260262140

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll ans = 0;
        ll x = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                x++;
            }
            else if (x == 0)
            {
                continue;
            }
            else
            {
                ans += (x + 1);
            }
        }

        cout << ans << endl;
    }
    return 0;
}