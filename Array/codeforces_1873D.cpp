// The first line contains a single integer t(1≤t≤1000) — the number of test cases.
// The first line of each test case contains two integers n
// and k(1≤k≤n≤2⋅105) — the length of the paper and the integer used in the operation.
// The second line of each test case contains a string s of length n
// consisting of characters B(representing a black cell) or W(representing a white cell).
// The sum of n over all test cases does not exceed 2⋅105 .
// For each test case, output a single integer — the minimum number of operations needed to remove all black cells.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vv vector<long long>
#define mm map<long long, longlong>
#define st set<long long>
#define at for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                s[i] = 'w';
                int x = min(i + k, n);
                for (int j = i; j < x; j++)
                {
                    if (s[j] == 'B')
                    {
                        s[j] = 'w';
                        i = j - 1;
                    }
                }
                count++;
            }
        }
        cout << count << endl;
    }
}