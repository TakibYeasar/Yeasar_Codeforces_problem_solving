
// The first line contains a single integer t(1≤t≤100) — the number of testcases.
// The only line of each testcase contains three integers n,k and x(1≤x≤k≤n≤100).
// For each test case, in the first line, print "YES" or "NO" — whether you can take an arbitrary amount of each integer
// from 1 to k,except integer x,so that their sum is equal to n.
// If you can,the second line should contain a single integer m— the total amount of taken integers.The third line should contain m
// integers — each of them from 1 to k, not equal to x,and their sum is n.
// If there are multiple answers,print any of them.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, k, x;
//         cin >> n >> k >> x;
//         int sum = 0;
//         for (int j = 1; j <= k; j++)
//         {
//             if (j != x)
//             {
//                 sum += j;
//             }
//         }
//         if (sum == n)
//         {
//             cout << "YES" << endl;
//             cout << 1 << endl;
//             cout << n - 1 << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; ++j)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == x)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
