
// Problem link ===>> https://codeforces.com/problemset/problem/200/B
// submission link ===>> https://codeforces.com/contest/200/submission/241202554

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    float aver = sum / n;
    cout << aver;
}