
// Problem link ===>> https://codeforces.com/problemset/problem/2050/C
// submission link ===>> https://codeforces.com/contest/2050/submission/299478268

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int sum = 0, twos = 0, threes = 0;

        for (auto &ch : n)
        {
            sum += ch - '0';
            twos += ch == '2';
            threes += ch == '3';
        }

        bool found = false;

        for (int x = 0; x <= min(twos, 9); x++)
        {
            for (int y = 0; y <= min(threes, 3); y++)
            {
                if ((sum + 2 * x + 6 * y) % 9 == 0)
                {
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
