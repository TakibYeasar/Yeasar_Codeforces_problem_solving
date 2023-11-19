
// The first input line contains a single integer n(1 ≤ n ≤ 100) — the number of orange - containing drinks in
// Vasya's fridge. The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume fraction of orange juice in
// the i-th drink, in percent. The numbers are separated by a space.
// Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be considered correct
// if the absolute or relative error does not exceed 10  - 4.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int drinks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> drinks[i];
    }

    // Sort the drinks in decreasing order.
    sort(drinks, drinks + n, greater<int>());

    int total_drinks = 0;
    for (int i = 0; i < n; i++)
    {
        // If the current drink is greater than the number of people in the group, we can give everyone the drink.
        if (drinks[i] > i)
        {
            total_drinks += i + 1;
        }
        else
        {
            // Otherwise, we can only give the drink to the first drinks[i] people.
            total_drinks += drinks[i];
        }
    }

    cout << total_drinks << endl;

    return 0;
}
