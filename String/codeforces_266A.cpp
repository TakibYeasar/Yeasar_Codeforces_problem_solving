
// The first line contains integer n(1 ≤ n ≤ 50) — the number of stones on the table.
// The next line contains string s, which represents the colors of the stones.We 'll consider the
// stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R",
// if the i-th stone is red, "G", if it' s green and "B", if it's blue.
// Print a single integer — the answer to the problem.
 
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
