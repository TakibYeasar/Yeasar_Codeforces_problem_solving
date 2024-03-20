
// Problem link ===>> https://codeforces.com/problemset/problem/1928/B
// submission link ===>> https://codeforces.com/contest/1928/submission/249340016

#include<bits/stdc++.h>
using namespace std;

void asquare(){
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    set<long long> uniqueValues(arr.begin(), arr.end());
    vector<long long> sortedValues(uniqueValues.begin(), uniqueValues.end());

    long long ans = 0;
    for (int i = 0; i < sortedValues.size(); i++)
    {
        long long x = sortedValues[i];
        auto itt = lower_bound(sortedValues.begin(), sortedValues.end(), x + n);
        long long distance = itt - sortedValues.begin() - i;
        ans = max(ans, distance);
    }

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        asquare();
    }

    return 0;
}