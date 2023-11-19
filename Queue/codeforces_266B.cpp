
// The first line contains two integers n and t(1 ≤ n, t ≤ 50), which represent the number of children in the queue
// and the time after which the queue will transform into the arrangement you need to find.
// The next line contains string s,which represents the schoolchildren's initial arrangement. If the i-th position
// in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".
// Print string a,which describes the arrangement after t seconds.If the i - th position has a boy after
// the needed time, then the i - th character a must equal "B", otherwise it must equal "G".

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> queue;
    int n, patience;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> patience;
        queue.push(patience);
    }

    int left = 0;

    while (!queue.empty())
    {
        int patience = queue.front();
        queue.pop();

        if (patience > 1)
        {
            patience--;
            queue.push(patience);
        }
        else
        {
            left++;
        }
    }

    cout << left << endl;

    return 0;
}
