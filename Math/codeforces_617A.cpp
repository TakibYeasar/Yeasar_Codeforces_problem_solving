
// Problem link ===>> https://codeforces.com/problemset/problem/617/A
// submission link ===>> https://codeforces.com/contest/617/submission/220992266

#include <iostream>
    using namespace std;

int main()
{
    int x;
    cin >> x;

    int steps = (x + 4) / 5; // Adding 4 before division to round up

    cout << steps << endl;

    return 0;
}
