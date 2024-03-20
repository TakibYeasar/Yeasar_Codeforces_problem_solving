
// Problem link ===>> https://codeforces.com/problemset/problem/1845/A
// submission link ===>> https://codeforces.com/contest/1845/submission/241203014

#include <bits/stdc++.h>

#define ll long long int
#define pb push_back

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, k, s;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << '\n';
            for (int i = 0; i < n; i++)
                cout << '1' << ' ';
            cout << '\n';
        }
        else if (n % 2 == 1 && k == 2)
        {
            cout << "NO" << endl;
        }
        else if (k == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES\n";
            cout << n / 2 << '\n';
            for (int i = 1; i < n / 2; i++)
                cout << 2 << " ";
            cout << 2 + (n % 2) << '\n';
        }
    }

    return 0;
}