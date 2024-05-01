
// Problem link ===>> https://codeforces.com/problemset/problem/1948/C
// submission link ===>> https://codeforces.com/contest/1948/submission/259018011

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        char arr[2][n];
        string s;
        cin >> s;

        for (ll i = 0; i < n; i++)
        {
            arr[0][i] = s[i];
        }
        cin >> s;

        for (ll i = 0; i < n; i++)
        {
            arr[1][i] = s[i];
        }
        if (arr[1][n - 2] == '<')
        {
            cout << "NO" << endl;
            continue;
        }
        ll x = 1;
        ll y = n - 2;
        while (y > 0)
        {
            if (arr[(x + 1) % 2][y - 1] == '>')
            {
                x = (x + 1) % 2;
                y = y - 1;
            }
            else if (y >= 2 && arr[x][y - 2] == '>')
            {
                y = y - 2;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (y <= 0){
            cout << "YES" << endl;
        }
    }
    return 0;
}