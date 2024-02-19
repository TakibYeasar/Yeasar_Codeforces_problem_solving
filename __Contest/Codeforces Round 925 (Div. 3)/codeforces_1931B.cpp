#include <iostream>
#include <vector>
using namespace std;

bool canEqualizeWater(const vector<int> &containers)
{
    int totalWater = 0;
    for (int water : containers)
    {
        totalWater += water;
    }

    // If the total water is not divisible by the number of containers, it's impossible
    if (totalWater % containers.size() != 0)
    {
        return false;
    }

    // Calculate the target average amount of water
    int targetWater = totalWater / containers.size();

    // Check if each container can reach the target amount
    for (int water : containers)
    {
        if (water > targetWater || (targetWater - water) > water)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> containers(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> containers[i];
        }

        if (canEqualizeWater(containers))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
