#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read input for N
    long long int n;
    cin >> n;

    // Formula for sum of natural numbers: n * (n + 1) / 2
    long long int sum = n * (n + 1) / 2;

    // Print the sum
    cout << sum << endl;

    return 0;
}