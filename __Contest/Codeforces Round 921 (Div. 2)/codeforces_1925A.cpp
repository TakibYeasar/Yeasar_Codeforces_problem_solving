
// Problem link ===>> https://codeforces.com/contest/1925/problem/A
// submission link ===>> https://codeforces.com/contest/1925/submission/243579874

#include<bits/stdc++.h>
using namespace std;

string generateString(int n, int k)
{
    string s = "";

    // Generate the first k letters in ascending order
    for (char ch = 'a'; ch < 'a' + k; ch++)
    {
        s += ch;
    }

    // Repeat the first k letters (n - 1) times to ensure all combinations
    for (int i = 1; i < n; i++)
    {
        s += s.substr(0, k);
    }

    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s = generateString(n, k);
        cout << s << endl;
    }

    return 0;
}
