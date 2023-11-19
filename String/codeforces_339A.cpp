
// The first line contains a non - empty string s — the sum Xenia needs to count.String s contains no spaces.It only contains
// digits and characters "+".Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.
// Print the new sum that Xenia can count.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Remove the '+' characters from the string
    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    // Sort the string in non-decreasing order
    sort(s.begin(), s.end());

    // Output the modified string
    cout << s << endl;

    return 0;
}
