#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findApocalypseYear(int n, vector<int> &periodicities)
{
    int year = 1;
    for (int i = 0; i < n; ++i)
    {
        year = (year + periodicities[i] - 1) / periodicities[i] * periodicities[i];
    }
    return year;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> periodicities(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> periodicities[i];
        }
        cout << findApocalypseYear(n, periodicities) << endl;
    }
    return 0;
}
