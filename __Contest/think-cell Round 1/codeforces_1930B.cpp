#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Initialize the permutation with all zeros
        vector<int> p(n, 0);

        // Place the largest number at the beginning
        p[0] = n;

        // Fill in the remaining numbers in ascending order
        for (int i = 1; i < n; ++i) {
            p[i] = i;
        }

        // Print the permutation
        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
