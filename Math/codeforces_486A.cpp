
// Problem link ===>> https://codeforces.com/problemset/problem/486/A
// submission link ===>> https://codeforces.com/contest/486/submission/228046103

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n / 2 + 1) << endl;
    }

    return 0;
}
