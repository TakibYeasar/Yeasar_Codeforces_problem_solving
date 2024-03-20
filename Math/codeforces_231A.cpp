
// Problem link ===>> https://codeforces.com/problemset/problem/231/A
// submission link ===>> https://codeforces.com/contest/231/submission/206754658

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

        // Count the number of problems the team can solve together
        if (p + v + t >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
