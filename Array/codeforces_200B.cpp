
// The first input line contains a single integer n(1 ≤ n ≤ 100) — the number of orange - containing drinks in Vasya's fridge. 
// The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume fraction of orange juice in
// the i-th drink, in percent. The numbers are separated by a space.
// Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be considered correct
// if the absolute or relative error does not exceed 10  - 4.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    float aver = sum / n;
    cout << aver;
}