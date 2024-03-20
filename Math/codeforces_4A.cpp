
// Problem link ===>>  https://codeforces.com/problemset/problem/4/A
// submission link ===>> https://codeforces.com/contest/4/submission/200982571

#include <iostream>
using namespace std;

int main()
{
    int weight;
    cin >> weight;

    // Check if the weight can be divided into two even parts
    // and both parts are greater than 1
    if (weight % 2 == 0 && weight > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
