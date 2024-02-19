#include <bits/stdc++.h>
using namespace std;

// Function to calculate circle area
double calculateArea(double radius)
{
    const double PI = 3.141592653;
    return PI * radius * radius;
}

int main()
{
    double radius;

    // Read input for radius
    cin >> radius;

    // Calculate area using the function
    double area = calculateArea(radius);

    // Print area with 9 decimal places
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
