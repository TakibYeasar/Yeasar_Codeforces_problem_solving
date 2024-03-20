
// Problem link ===>> https://codeforces.com/problemset/problem/116/A
// submission link ===>> https://codeforces.com/contest/116/submission/224953615

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c = 0, m = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    cout << m << endl;

    return 0;
}
