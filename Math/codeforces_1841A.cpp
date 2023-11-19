
// The first line contains one integer t(1≤t≤99) — the number of test cases.
// Each test case consists of one line containing one integer n(2≤n≤100) — the number of integers equal to 1 on the board.
// For each test case,print Alice if Alice wins when both players play optimally.Otherwise, print Bob.

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
