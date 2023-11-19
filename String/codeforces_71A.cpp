
// The first line contains an integer n(1 ≤ n ≤ 100).Each of the following n lines contains one word.All the words consist of
// lowercase Latin letters and possess the lengths of from 1 to 100 characters.
// Print n lines.The i- th line should contain the result of replacing of the i - th word from the input data.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n

    for (int i = 0; i < n; i++)
    {
        string word;
        getline(cin, word);

        int length = word.length();

        // Check if the word length is greater than 10
        if (length > 10)
        {
            string abbreviated = word[0] + to_string(length - 2) + word[length - 1];
            cout << abbreviated << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
