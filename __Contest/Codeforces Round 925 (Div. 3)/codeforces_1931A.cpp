
// Problem link ===>> https://codeforces.com/contest/1931/problem/A
// submission link ===>> https://codeforces.com/contest/1931/submission/246180400

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int encodedValue;
        cin >> encodedValue; // Encoded word value

        string smallestWord = "zzz"; // Initialize with a large value

        // Iterate through all possible three-letter words
        for (char c1 = 'a'; c1 <= 'z'; ++c1)
        {
            for (char c2 = 'a'; c2 <= 'z'; ++c2)
            {
                for (char c3 = 'a'; c3 <= 'z'; ++c3)
                {
                    // Calculate the encoded value for the current word
                    int currentEncodedValue = (c1 - 'a' + 1) + (c2 - 'a' + 1) + (c3 - 'a' + 1);

                    // Check if the encoded value matches the input
                    if (currentEncodedValue == encodedValue)
                    {
                        // Update the lexicographically smallest word
                        string currentWord = string(1, c1) + string(1, c2) + string(1, c3);
                        smallestWord = min(smallestWord, currentWord);
                    }
                }
            }
        }

        cout << smallestWord << endl;
    }

    return 0;
}
