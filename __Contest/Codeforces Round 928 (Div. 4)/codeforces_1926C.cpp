#include <iostream>
using namespace std;

int sumOfDigits(int num)
{

    // This function takes an integer num as input.
    // It initializes a variable sum to 0 to store the sum of digits.
    // It uses a while loop to iterate as long as num is greater than 0.
    // In each iteration, it adds the last digit of num (obtained using num % 10) to sum.
    // It removes the last digit from num by dividing it by 10 (num /= 10).
    // Finally, it returns the calculated sum of digits.
    
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long totalSum = 0;
        for (int i = 1; i <= n; ++i)
        {
            totalSum += sumOfDigits(i);
        }

        cout << totalSum << endl;
    }

    return 0;
}
