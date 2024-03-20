
// Problem link ===>> https://codeforces.com/problemset/problem/41/A
// submission link ===>> https://codeforces.com/contest/41/submission/224950415

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
