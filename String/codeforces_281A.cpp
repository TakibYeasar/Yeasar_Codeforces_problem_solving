
// A single line contains a non - empty word.This word consists of lowercase and uppercase English letters.The length of
// the word will not exceed 103.
// Output the given word after capitalization.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    // Capitalize the first letter of the word
    word[0] = toupper(word[0]);

    // Output the modified word
    cout << word << endl;

    return 0;
}
