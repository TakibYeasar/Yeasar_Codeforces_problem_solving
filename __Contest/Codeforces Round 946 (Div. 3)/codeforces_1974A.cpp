
// Problem link ===>> https://codeforces.com/problemset/problem/1974/A
// submission link ===>> https://codeforces.com/contest/1974/submission/261835573

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        int screen2 = (y + 1) / 2;
        int cell2 = y * 4;

        int total_cell = screen2 * 15;

        int remaining_cell = total_cell - cell2;

        if (remaining_cell >= x)
        {
            cout << screen2 << endl;
        }
        else
        {
            int remaining1 = x - remaining_cell;
            int screen1 = (remaining1 + 14) / 15;
            cout << screen2 + screen1 << endl;
        }
    }
    return 0;
}