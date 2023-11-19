
// The first line of the input contains an integer n(1 ≤ n ≤ 100000) — the number of magnets.Then n lines follow.
// The i - th line(1 ≤ i ≤ n) contains either characters "01", if Mike put the i - th magnet in the "plus-minus" position,
// or characters "10", if Mike put the magnet in the "minus-plus" position.
// On the single line of the output print the number of groups of magnets.

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
