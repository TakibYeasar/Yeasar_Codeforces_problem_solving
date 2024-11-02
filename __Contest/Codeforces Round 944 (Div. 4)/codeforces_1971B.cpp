// Problem link ===>> https://codeforces.com/problemset/problem/1971/B
// submission link ===>> https://codeforces.com/contest/1971/submission/289026820

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
        bool all_same = true;

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[0])
            {
                all_same = false;
                break;
            }
        }

        if (all_same)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            next_permutation(s.begin(), s.end());
            cout << s << endl;
        }
    }

    return 0;
}
