
// Problem link ===>> https://codeforces.com/problemset/problem/266/A
// submission link ===>> https://codeforces.com/contest/266/submission/220989934

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        if (stones[i] == stones[i - 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
