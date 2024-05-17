// Problem link ===>> https://codeforces.com/problemset/problem/1971/B
// submission link ===>>

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

        int n = s.length();

        if (n > 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] != s[0])
                {
                    cout << "YES" << endl;
                    next_permutation(s.begin(), s.end());
                    cout << s << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}