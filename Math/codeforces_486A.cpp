
// The single line contains the positive integer n(1 ≤ n ≤ 1015).
// Print f(n) in a single line.

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
