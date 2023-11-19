
// The first line contains a non - empty string, that contains only lowercase English letters — the user name.
// This string contains at most 100 letters. If it is a female by our hero's method, print "CHAT WITH HER!"
// (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

#include <iostream>
#include <set>
using namespace std;

int main()
{
    string username;
    cin >> username;

    // Use a set to count the unique characters
    set<char> distinctChars(username.begin(), username.end());

    // Check if the number of distinct characters is odd
    if (distinctChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
