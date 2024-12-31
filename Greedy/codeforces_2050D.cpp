
// Problem link ===>> https://codeforces.com/problemset/problem/2050/D
// submission link ===>> https://codeforces.com/contest/2050/submission/299180782

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        for (int i = 1; i < n; ++i)
        {
            for (int x = i; x > 0 && s[x] >= s[x - 1] + 2; --x)
            {
                s[x]--;
                swap(s[x], s[x - 1]);
            }
        }
        cout << s << endl;
    }
    return 0;
}