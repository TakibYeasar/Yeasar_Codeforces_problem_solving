
// Each of the first two lines contains a bought string.The strings' lengths range from 1 to 100 inclusive. It is
// guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.
// If the first string is less than the second one,print "-1".If the second string is less than the first one,
// print "1".If the strings are equal, print "0".Note that the letters' case is not taken into consideration
// when the strings are compared.

#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the two strings
    int result = str1.compare(str2);

    // Output the result
    if (result < 0)
    {
        cout << "-1" << endl;
    }
    else if (result > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
