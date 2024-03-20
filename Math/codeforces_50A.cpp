
// Problem link ===>> https://codeforces.com/problemset/problem/50/A
// submission link ===>> https://codeforces.com/contest/50/submission/207222170

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    // Calculate the number of dominoes that can be placed
    int area = m * n;
    int dominoes = area / 2;
    cout << dominoes << endl;

    return 0;
}
