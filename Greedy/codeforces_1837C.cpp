
// The first line contains a single integer t(1≤t≤3⋅104) — the number of test cases.
// The first and only line of each test case contains the string s(1≤ | s |≤3⋅105) consisting of characters 0,
// 1, and / or ?.The sum of the string lengths over all test cases does not exceed 3⋅105 .
// For each test case,print a binary string with the minimum possible cost among those that match the
// given pattern.If there are multiple answers, print any of them.

#include <iostream>
#include <string>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll l = s.length();
        char r[l + 1];

        if (s[0] == '?')
        {
            r[0] = '0';
        }
        else
        {
            r[0] = s[0];
        }

        for (ll i = 1; i < l; i++)
        {
            if (s[i] == '?')
            {
                r[i] = r[i - 1];
            }
            else
            {
                r[i] = s[i];
            }
        }

        r[l] = '\0';
        cout << r << "\n";
    }
    return 0;
}
