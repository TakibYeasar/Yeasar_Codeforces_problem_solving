
# Problem link ===>> https://codeforces.com/contest/2004/problem/C


def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))

        a.sort(reverse=True)

        ans = 0
        for i in range(0, n, 2):
            if k >= (a[i] - a[i + 1]):
                k -= (a[i] - a[i + 1])
            else:
                ans += ((a[i] - a[i + 1]) - k)
                k = 0

        if n % 2 == 1:
            ans += a[-1]

        print(ans)


if __name__ == "__main__":
    main()
