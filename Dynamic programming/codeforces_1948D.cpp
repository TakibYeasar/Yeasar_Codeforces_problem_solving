
// Problem link ===>> https://codeforces.com/problemset/problem/1948/D
// submission link ===>> https://codeforces.com/contest/1948/submission/259019763

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int longestRepeatedSubstring(string str, int n)
{
    int lcs[n + 1][n + 1];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            lcs[i][j] = 0;
        }
    }

    string res;
    int res_length = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j + i) > n)
                continue;
            if ((str[j - 1] == str[j + i - 1] || str[j + i - 1] == '?' || str[j - 1] == '?'))
            {
                lcs[j][i + j] = lcs[j - 1][i + j - 1] + 1;
                if (lcs[j][i + j] == i)
                {
                    res_length = max(res_length, i);
                }
            }
            else
                lcs[j][i + j] = 0;
        }
    }

    return res_length;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        cout << longestRepeatedSubstring(s, n) * 2 << endl;
    }
    return 0;
}