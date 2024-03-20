
// Problem link ===>> https://codeforces.com/problemset/problem/1841/A
// submission link ===>> https://codeforces.com/contest/1841/submission/209977694

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 5)
            cout
                << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
