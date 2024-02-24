// You have an array a of n integers.

// You can no more than once apply the following operation: select three integers i, j, x (1≤i≤j≤n) and assign 
// all elements of the array with indexes from i to j the value x. The price of this operation depends on the 
// selected indices and is equal to (j−i+1) burles.

// For example, the array is equal to [1,2,3,4,5,1]. If we choose i=2,j=4,x=8, 
// then after applying this operation, the array will be equal to [1,8,8,8,5,1].

// What is the least amount of burles you need to spend to make all the elements of the array equal?

// Input
// The first line contains a single integer t (1≤t≤104) — the number of input test cases. The descriptions of the test cases follow.

// The first line of the description of each test case contains a single integer n (1≤n≤2⋅105) — the size of the array.
// The second line of the description of each test case contains n integers a1,a2,…,an (1≤ai≤n) — array elements.
// It is guaranteed that the sum of n for all test cases does not exceed 2⋅105.

// Output
// For each test case, output one integer — the minimum number of burles that will have to be spent to make 
// all the elements of the array equal. It can be shown that this can always be done.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int left = 1;
        int right = 1;
        for (int i = 1; i < n; i++){
            if(a[i] != a[i-1]){
                break;
            }
            left++;
        }
        for (int i = (n-2); i >=0; i--){
            if(a[i] != a[i+1]){
                break;
            }
            right++;
        }

        int sum = 0;
        if(a[0]==a[n-1]){
            sum = min(n, (left+right));
        } else{
            sum = min(n, max(left, right));
        }
        cout << (n - sum) << endl;
    }
    return 0;
}