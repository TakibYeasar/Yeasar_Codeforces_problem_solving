
# Problem link ===>> https://codeforces.com/problemset/problem/2117/D

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
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1

    for _ in range(t):
        n = int(data[idx])
        idx += 1

        a = list(map(int, data[idx:idx + n]))
        idx += n

        if n < 2:
            print("NO\n")
            continue

        diff = a[1] - a[0]
        bad = False

        for i in range(2, n):
            if a[i] - a[i - 1] != diff:
                bad = True
                break

        if bad:
            print("NO\n")
            continue

        for i in range(n):
            if diff < 0:
                a[i] += diff * (n - i)
            else:
                a[i] -= diff * (i + 1)

        if a[0] >= 0 and a[0] % (n + 1) == 0:
            print("YES\n")
        else:
            print("NO\n")


if __name__ == "__main__":
    main()

