# Polycarp has two favorite integers x and y (they can be equal), and he has found an array a of length n.

# Polycarp considers a pair of indices ⟨i,j⟩ (1≤i<j≤n) beautiful if:

# ai+aj is divisible by x;
# ai−aj is divisible by y.
# For example, if x=5, y=2, n=6, a=[1,2,7,4,9,6], then the only beautiful pairs are:

# ⟨1,5⟩: a1+a5=1+9=10(10is divisible by 5) and a1−a5=1−9=−8(−8is divisible by 2);
# ⟨4,6⟩: a4+a6=4+6=10(10is divisible by 5) and a4−a6=4−6=−2(−2is divisible by 2).
# Find the number of beautiful pairs in the array a.
# Input
# The first line of the input contains a single integer t (1≤t≤104) — the number of test cases.
# Then the descriptions of the test cases follow.

# The first line of each test case contains three integers n, x, and y (2≤n≤2⋅105, 1≤x,y≤109) — the size of the array 
# and Polycarp's favorite integers.

# The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the elements of the array.
# It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

# Output
# For each test case, output a single integer — the number of beautiful pairs in the array a.

def solve():
    n, x, y = map(int, input().split())
    a = list(map(int, input().split()))

    ans = 0
    mp = {}
    for i in range(n):
        rem1 = a[i] % y
        rem2 = (x - a[i] % x) % x

        ans += mp.get(rem1, {}).get(rem2, 0)
        if rem1 not in mp:
            mp[rem1] = {}
        mp[rem1][a[i] % x] = mp[rem1].get(a[i] % x, 0) + 1

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
