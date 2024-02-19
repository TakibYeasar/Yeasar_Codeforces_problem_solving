# The first line contains a single integer t(1≤t≤104) — the number of test cases.
# The first line of each test case contains a single integer n(1≤n≤3⋅105).
# The second line contains n integers a1, a2,…, an(1≤ai≤109). The third line contains n integers b1,
# b2,…, bn(1≤bi≤109). The sum of n over all test cases doesn't exceed 3⋅105 .
# For each test case, print a single integer — the minimum possible total cost of putting chips according to the rules.

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    a.sort()
    b.sort()
    sum1 = n * b[0]
    sum2 = n * a[0]

    for i in range(n):
        sum1 += a[i]
        sum2 += b[i]

    print(min(sum1, sum2))


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
