
// The first line contains a single integer t(1≤t≤100) — the number of testcases.
// The only line of each testcase contains three integers n,k and x(1≤x≤k≤n≤100).
// For each test case, in the first line, print "YES" or "NO" — whether you can take an arbitrary amount of each integer
// from 1 to k,except integer x,so that their sum is equal to n.
// If you can,the second line should contain a single integer m— the total amount of taken integers.The third line should contain m
// integers — each of them from 1 to k, not equal to x,and their sum is n.
// If there are multiple answers,print any of them.
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, k, s;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << '\n';
            for (int i = 0; i < n; i++)
                cout << '1' << ' ';
            cout << '\n';
        }
        else if (n % 2 == 1 && k == 2)
        {
            cout << "NO" << endl;
        }
        else if (k == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES\n";
            cout << n / 2 << '\n';
            for (int i = 1; i < n / 2; i++)
                cout << 2 << " ";
            cout << 2 + (n % 2) << '\n';
        }
    }

    return 0;
}