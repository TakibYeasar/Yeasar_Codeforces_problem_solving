
// The first line contains a single integer n(1 ≤ n ≤ 100) — the number of rooms.
// The i- th of the next n lines contains two integers pi and qi(0 ≤ pi ≤ qi ≤ 100) — the number of people
// who already live in the i - th room and the room's capacity.
// Print a single integer — the number of rooms where George and Alex can move in.

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
