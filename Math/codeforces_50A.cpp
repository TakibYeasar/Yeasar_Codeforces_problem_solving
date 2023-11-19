
// In a single line you are given two integers M and N — board sizes in squares(1 ≤ M ≤ N ≤ 16).
// Output one number — the maximal number of dominoes,which can be placed.

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    // Calculate the number of dominoes that can be placed
    int area = m * n;
    int dominoes = area / 2;
    cout << dominoes << endl;

    return 0;
}
