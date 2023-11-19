
// The first line contains three positive integers k, n, w(1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana,
// initial number of dollars the soldier has and number of bananas he wants.
// Output one integer — the amount of dollars that the soldier must borrow from his friend.If he doesn't have to borrow money, output 0.

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
