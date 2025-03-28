
// Problem link ===>> https://codeforces.com/contest/1398/problem/C
// submission link ===>> https://codeforces.com/contest/1398/submission/312303371

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int p[n + 2];
        p[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            char c;
            cin >> c;

            int d = c - '0';

            p[i] = p[i - 1] + d;
        }

        map<int, int> mp;

        ll ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int diff = p[i] - i;
            ans += mp[diff];

            mp[diff]++;
        }

        cout << ans << endl;
    }
    return 0;
}