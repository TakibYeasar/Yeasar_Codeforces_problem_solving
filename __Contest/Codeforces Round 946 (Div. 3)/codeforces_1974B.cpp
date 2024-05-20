
// Problem link ===>> https://codeforces.com/problemset/problem/1974/B
// submission link ===>> https://codeforces.com/contest/1974/submission/261864513

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

        string b;
        cin >> b;

        string r = "";
        unordered_map<char, bool> visited;
        for (char ch : b)
        {
            if (!visited[ch])
            {
                r += ch;
                visited[ch] = true;
            }
        }
        sort(r.begin(), r.end());

        unordered_map<char, char> sym_map;
        ll m = r.size();
        for (ll i = 0; i < m; ++i)
        {
            sym_map[r[i]] = r[m - i - 1];
        }

        string s = "";
        for (char ch : b)
        {
            s += sym_map[ch];
        }

        cout << s << endl;
    }

    return 0;
}