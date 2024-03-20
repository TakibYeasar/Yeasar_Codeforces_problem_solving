
// Problem link ===>> https://codeforces.com/problemset/problem/467/A
// submission link ===>> https://codeforces.com/contest/467/submission/225690880

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rooms_with_space = 0;
    for (int i = 0; i < n; i++)
    {
        int current_occupants, capacity;
        cin >> current_occupants >> capacity;

        if (capacity - current_occupants >= 2)
        {
            rooms_with_space++;
        }
    }

    cout << rooms_with_space << endl;

    return 0;
}
