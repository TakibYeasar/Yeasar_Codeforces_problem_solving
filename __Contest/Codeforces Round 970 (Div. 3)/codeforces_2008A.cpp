
// Problem link ===>> https://codeforces.com/contest/2008/problem/A
// submission link ===>> https://codeforces.com/contest/2008/submission/279106045

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;

        if (sum % 2 == 0)
        {
            int halfSum = sum / 2;
            if (halfSum <= a + 2 * b && halfSum % 2 <= a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
