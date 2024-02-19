#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m; // Use long long int to handle large values up to 10^18

    // Read input numbers
    cin >> n >> m;

    // Extract last digits using modulo operator (%)
    int nLastDigit = n % 10;
    int mLastDigit = m % 10;

    // Calculate and print the sum of last digits
    cout << (nLastDigit + mLastDigit) << endl;

    return 0;
}