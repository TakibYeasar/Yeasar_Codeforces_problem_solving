// Vasya has two hobbies — adding permutations†
// to arrays and finding the most frequently occurring element. Recently, he found an array a
// and decided to find out the maximum number of elements equal to the same number in the array a
// that he can obtain after adding some permutation to the array a.

// More formally, Vasya must choose exactly one permutation p1,p2,p3,…,pn of length n, and then change the 
// elements of the array a according to the rule ai:=ai+pi. After that, Vasya counts how many times each number 
// occurs in the array a and takes the maximum of these values. You need to determine the maximum value he can obtain.

// †
// A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. 
// For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), 
// and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

// Input
// Each test consists of multiple test cases. The first line contains a single integer t
// (1≤t≤2⋅104) — the number of test cases. Then follows the description of the test cases.

// The first line of each test case contains a single integer n (1≤n≤2⋅105) — the length of the array a.

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the elements of the array a.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, output a single number — the maximum number of elements equal to the same number after the 
// operation of adding a permutation.

// Note
// In the first test case, it is optimal to choose p=[2,1]. Then after applying the operation, the array a
// will be [3,3], in which the number 3 occurs twice, so the answer is 2.

// In the second test case, one of the optimal options is p=[2,3,1,4]. After applying the operation, 
// the array a will be [9,4,5,5]. Since the number 5 occurs twice, the answer is 2.

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