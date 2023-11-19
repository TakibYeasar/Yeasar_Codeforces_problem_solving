
// The first line of the input contains an integer x(1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.
// Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

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
