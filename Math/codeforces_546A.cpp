
// Problem link ===>> https://codeforces.com/problemset/problem/546/A
// submission link ===>> https://codeforces.com/contest/546/submission/220991670

#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;
    for (int i = 1; i <= w; ++i)
    {
        cost += i * k;
    }

    int borrowed = cost - n;

    if (borrowed <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << borrowed << endl;
    }

    return 0;
}
