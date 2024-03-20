
# Problem link ===>> https://codeforces.com/problemset/problem/1879/B

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
