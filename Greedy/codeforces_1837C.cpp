
// Problem link ===>>  https://codeforces.com/problemset/problem/1837/C
// submission link ===>> https://codeforces.com/contest/1837/submission/209980170

#include <iostream>
#include <string>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll l = s.length();
        char r[l + 1];

        if (s[0] == '?')
        {
            r[0] = '0';
        }
        else
        {
            r[0] = s[0];
        }

        for (ll i = 1; i < l; i++)
        {
            if (s[i] == '?')
            {
                r[i] = r[i - 1];
            }
            else
            {
                r[i] = s[i];
            }
        }

        r[l] = '\0';
        cout << r << "\n";
    }
    return 0;
}
