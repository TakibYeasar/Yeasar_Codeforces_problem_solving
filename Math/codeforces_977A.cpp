
// The first line of the input contains two integer numbers n and k(2≤n≤109, 1≤k≤50) — the number from which
// Tanya will subtract and the number of subtractions correspondingly.
// Print one integer number — the result of the decreasing n by one k times.
// It is guaranteed that the result will be positive integer number.

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int current = n;
    for (int i = 0; i < k; i++)
    {
        if (current % 10 == 0)
        {
            current /= 10;
        }
        else
        {
            current--;
        }
    }

    cout << current << endl;

    return 0;
}
