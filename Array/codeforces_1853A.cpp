
// Problem link ===>> https://codeforces.com/problemset/problem/1853/A?locale=en
// submission link ===>> https://codeforces.com/contest/1853/submission/241203154

#include <iostream>
#define INF 10000000000

using namespace std;

long long int t, n, a, minim, b, i, ok;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        minim = INF;
        cin >> a;
        for (i = 1, ok = 1; i < n; i++)
        {
            cin >> b;
            if (a > b)
                ok = 0;
            else if ((b - a) / 2 + 1 < minim)
                minim = (b - a) / 2 + 1;
            a = b;
        }
        if (!ok)
            cout << 0 << '\n';
        else
            cout << minim << '\n';
    }
    return 0;
}
