
# Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/N


import sys


def is_ok(b, y):
    return b * b * b >= y


def solve():
    x = int(sys.stdin.readline())
    for a in range(1, int(x ** (1/3)) + 1):
        y = x - a ** 3
        l, r = 1, 10000

        while l < r:
            mid = (l + r) // 2
            if not is_ok(mid, y):
                l = mid + 1
            else:
                r = mid

        if l ** 3 == y:
            print("YES")
            return
    print("NO")


def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
