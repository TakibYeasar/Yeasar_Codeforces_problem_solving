
# Problem link ===>> https://codeforces.com/contest/779/problem/D


import sys


def can_convert(s, t, op, seq):
    deleted = [False] * len(s)

    for i in range(min(op, len(seq))):
        deleted[seq[i]] = True

    cnt = 0
    for i in range(len(s)):
        if cnt == len(t):
            break
        if not deleted[i] and s[i] == t[cnt]:
            cnt += 1

    return cnt == len(t)


def main():
    s = sys.stdin.readline().strip()
    t = sys.stdin.readline().strip()

    n = len(s)
    seq = list(map(int, sys.stdin.readline().split()))
    seq = [x - 1 for x in seq]

    left, right = 0, n
    while left < right:
        mid = (left + right + 1) // 2
        if can_convert(s, t, mid, seq):
            left = mid
        else:
            right = mid - 1

    print(left)


if __name__ == "__main__":
    main()
