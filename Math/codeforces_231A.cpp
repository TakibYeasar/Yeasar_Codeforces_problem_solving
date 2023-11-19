
// The first input line contains a single integer n(1 ≤ n ≤ 1000) — the number of problems in the contest.
// Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1,
// then Petya is sure about the problem 's solution, otherwise he isn' t sure.The second number shows Vasya
// 's view on the solution, the third number shows Tonya' s view.The numbers on the lines are separated by spaces.
// Print a single integer — the number of problems the friends will implement on the contest.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

        // Count the number of problems the team can solve together
        if (p + v + t >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
