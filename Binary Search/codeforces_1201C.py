
# Problem link ===>> https://codeforces.com/contest/1201/problem/C

import sys


def min_operations(m, arr, n):
    total_op = 0
    mid_index = n // 2 
    for i in range(mid_index, n):
        if arr[i] < m:
            total_op += m - arr[i]
    return total_op


def is_ok(mid, arr, n, k):
    return min_operations(mid, arr, n) > k


def main():
    n, k = map(int, sys.stdin.readline().split())
    arr = list(map(int, sys.stdin.readline().split()))

    arr.sort()

    left, right = 0, int(1e9 + 1 + k)

    while left < right:
        mid = (left + right) // 2
        if not is_ok(mid, arr, n, k):
            left = mid + 1
        else:
            right = mid

    print(left - 1)

if __name__ == "__main__":
    main()
