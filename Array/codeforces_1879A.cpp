
//     The first line contains one integer t(1≤t≤100) — the number of test cases.

//     The first line of each test case contains one integer n(2≤n≤100) — the number of athletes.Then n
//     lines follow,
//     the i
//         - th of them contains two integers si and ei(1≤si≤109; 1≤ei≤100) — the strength and the endurance of the i
//         - th athlete.

// For each test case, print the answer as follows: if the answer exists, print one integer — the value of
// w meeting the constraints.The integer you print should satisfy 1≤w≤109 .It can be shown that if the answer exists,
// at least one such value of w exists as well.If there are multiple answers, you can print any of them;
// otherwise, print one integer −1.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if (n % k != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int groups = n / k;
    int groups_with_extra = groups / 2 + 1;

    if (groups_with_extra > k)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        if (i < groups_with_extra * k)
        {
            scores[i] = groups - groups_with_extra + 1 - (i / k);
        }
        else
        {
            scores[i] = groups_with_extra - (i / k);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
