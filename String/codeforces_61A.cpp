
// Problem link ===>> https://codeforces.com/problemset/problem/61/A
// submission link ===>> https://codeforces.com/contest/61/submission/228045284

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string c = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            c += '0';
        }
        else
        {
            c += '1';
        }
    }

    cout << c << endl;

    return 0;
}
