
# Problem link ===>> https://codeforces.com/contest/2130/problem/B

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

MOD = 10**9 + 7
INF = float('inf')
input = sys.stdin.read
print = sys.stdout.write


def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = [0, 0, 0]

        for _ in range(n):
            temp = int(input())
            a[temp] += 1

        if k == a[1] + 2 * a[2] or k >= a[1] + 2 * a[2] + 2:
            print(-1)
            continue

        print(' '.join(['0'] * a[0] + ['2'] * a[2] + ['1'] * a[1]))


if __name__ == "__main__":
    main()
