
// Problem link ===>> https://codeforces.com/problemset/problem/344/A
// submission link ===>> https://codeforces.com/contest/344/submission/228037514

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, groups = 1;
    string previous, current;

    cin >> n;
    cin >> previous;

    for (int i = 1; i < n; i++)
    {
        cin >> current;
        if (current != previous)
        {
            groups++;
        }
        previous = current;
    }

    cout << groups << endl;

    return 0;
}
