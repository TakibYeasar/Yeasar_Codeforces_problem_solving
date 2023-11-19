
// The first line contains one integer n(1 ≤ n ≤ 100) — the quantity of friends Petya invited to the party.The second
// line contains n space - separated integers : the i - th number is pi — the number of a friend who gave a gift to
// friend number i.It is guaranteed that each friend received exactly one gift.It is possible that some friends
// do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.
// Print n space separated integers : the i - th number should equal the number of the friend who gave a gift to friend number i.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> presents(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int present;
        cin >> present;
        presents[present] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << presents[i] << " ";
    }
    cout << endl;

    return 0;
}
