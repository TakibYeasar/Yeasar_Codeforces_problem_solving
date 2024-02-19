
// Each test contains multiple test cases.The first line contains the number of test cases t(1≤t≤100).The description
// of the test cases follows.The first line of each test case contains a single integer n(2≤n≤500) —
// the length of the array a.The next line contains n integers a1,a2,…, an(1≤ai≤109) — the values of array a.
// It is guaranteed that the sum of n across all test cases does not exceed 500 .
// Output the minimum number of operations needed to make the array not sorted.

#include <iostream>
#define INF 10000000000

using namespace std;

long long int t, n, a, minim, b, i, ok;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        minim = INF;
        cin >> a;
        for (i = 1, ok = 1; i < n; i++)
        {
            cin >> b;
            if (a > b)
                ok = 0;
            else if ((b - a) / 2 + 1 < minim)
                minim = (b - a) / 2 + 1;
            a = b;
        }
        if (!ok)
            cout << 0 << '\n';
        else
            cout << minim << '\n';
    }
    return 0;
}
