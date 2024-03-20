
// Problem link ===>> https://codeforces.com/problemset/problem/1925/B
// submission link ===>> https://codeforces.com/contest/1925/submission/246683981

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        // Find all divisors of x
        vector<int> divisors;
        for (int i = 1; i * i <= x; ++i)
        {
            if (x % i == 0)
            {
                divisors.push_back(i);
                if (i * i != x)
                {
                    divisors.push_back(x / i);
                }
            }
        }

        // Sort divisors in descending order
        sort(divisors.rbegin(), divisors.rend());

        // Find the first divisor that can be used to create n sub-problems
        int max_balance = 0;
        for (int divisor : divisors)
        {
            if (n * divisor <= x)
            {
                max_balance = divisor;
                break;
            }
        }

        cout << max_balance << endl;
    }

    return 0;
}
