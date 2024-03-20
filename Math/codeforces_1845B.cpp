
// Problem link ===>> https://codeforces.com/problemset/problem/1845/B
// submission link ===>> https://codeforces.com/contest/1845/submission/214097714

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        int distAB = abs(xA - xB) + abs(yA - yB);
        int distAC = abs(xA - xC) + abs(yA - yC);
        int distBC = abs(xB - xC) + abs(yB - yC);
        int minDist = min(distAB, min(distAC, distBC));
        if (minDist == distAB)
        {
            cout << "1 " << distAC + distBC - distAB << endl;
        }
        else if (minDist == distAC)
        {
            cout << "2 " << distAB + distBC - distAC << endl;
        }
        else
        {
            cout << "3 " << distAB + distAC - distBC << endl;
        }
    }
    return 0;
}
