# You are given an array a of size n. You will do the following process to calculate your penalty:
# Split array a into two (possibly empty) subsequences† s and t such that every element of a is either in s or t‡.
# For an array b of size m, define the penalty p(b) of an array b as the number of indices ibetween 1 and m−1 where bi<bi+1.
# The total penalty you will receive is p(s)+p(t).
# If you perform the above process optimally, find the minimum possible penalty you will receive. 
# † A sequence x is a subsequence of a sequence y if x can be obtained from y by the deletion of several (possibly, zero or all) elements.
# ‡ Some valid ways to split array a=[3,1,4,1,5] into (s,t) are ([3,4,1,5],[1]), ([1,1],[3,4,5]) and ([],[3,1,4,1,5])
# while some invalid ways to split a are ([3,4,5],[1]), ([3,1,4,1],[1,5])and ([1,3,4],[5,1]).

# Input
# Each test contains multiple test cases. The first line contains a single integer t
#  (1≤t≤104) — the number of test cases. The description of the test cases follows.
# The first line of each test case contains a single integer n (1≤n≤2⋅105) — the size of the array a.
# The second line contains n integers a1,a2,…,an(1≤ai≤n) — the elements of the array a.
# It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

# Output
# For each test case, output a single integer representing the minimum possible penalty you will receive.

def solve():
    n = int(input())
    values = list(map(int, input().split()))
    
    penalty = 0
    sl = float('inf')
    tl = float('inf')
    
    for val in values:
        if sl > tl:
            sl, tl = tl, sl

        if val <= sl:
            sl = val
        elif val <= tl:
            tl = val
        else:
            sl = val
            penalty += 1

    print(penalty)


def main():
    t = int(input())
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()
