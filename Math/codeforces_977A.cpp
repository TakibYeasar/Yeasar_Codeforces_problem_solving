
// Problem link ===>> https://codeforces.com/problemset/problem/977/A
// submission link ===>> https://codeforces.com/contest/977/submission/224924369

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int current = n;
    for (int i = 0; i < k; i++)
    {
        if (current % 10 == 0)
        {
            current /= 10;
        }
        else
        {
            current--;
        }
    }

    cout << current << endl;

    return 0;
}
