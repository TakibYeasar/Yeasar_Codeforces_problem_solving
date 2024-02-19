#include<bits/stdc++.h>
using namespace std;

int maxBalance(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    int ideal_size = x / n;
    vector<int> difficulties(n, ideal_size);

    int remaining = x % n;
    for (int i = 0; i < remaining; i++)
    {
        difficulties[i]++;
    }

    int balance = difficulties[0];
    for (int i = 1; i < n; i++)
    {
        balance = __gcd(balance, difficulties[i]);
        if (balance == 1)
        {
            break;
        }
    }

    return balance;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;

        int max_balance = maxBalance(x, n);
        cout << max_balance << endl;
    }
    return 0;
}
