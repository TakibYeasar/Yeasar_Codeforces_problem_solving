
# Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/G


import sys


def is_ok(mid, k, n):
    position = mid - mid // n
    return position >= k


def solve():
    n, k = map(int, sys.stdin.readline().split())
    l, r = 0, 2 * k + 1

    while l < r:
        mid = (l + r) // 2
        if not is_ok(mid, k, n):
            l = mid + 1
        else:
            r = mid

    print(l)


def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
