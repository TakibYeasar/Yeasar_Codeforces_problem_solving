
# Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/H


import sys


def is_ok(mid, target, nums):
    return nums[mid] > target


def main():
    n, m = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    b = list(map(int, sys.stdin.readline().split()))

    a.sort()

    result = []
    for num in b:
        l, r = 0, n
        while l < r:
            mid = (l + r) // 2
            if not is_ok(mid, num, a):
                l = mid + 1
            else:
                r = mid
        result.append(str(l))

    print(" ".join(result))


if __name__ == "__main__":
    main()
