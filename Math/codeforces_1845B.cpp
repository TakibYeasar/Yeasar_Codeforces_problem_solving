
// The first line contains the single integer t (1≤t≤104) — the number of test cases.
// The first line of each test case contains two integers xA and yA (1≤xA,yA≤108) — the position of cell A, where both Bob
// and Carol are right now.The second line contains two integers xB and yB(1≤xB,yB≤108) — the position of cell B
// (Bob's house).The third line contains two integers xC and yC (1≤xC,yC≤108) — the position of cell C (Carol's house).
// Additional constraint on the input: the cells A, B, and C are pairwise distinct in each test case.
// For each test case, print the single integer — the maximum number of cells Bob and Carol can walk together
// if each of them goes home along one of the shortest paths.

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
