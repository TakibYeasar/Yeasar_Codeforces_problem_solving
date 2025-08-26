
# Problem link ===>> https://codeforces.com/contest/2119/problem/B

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
    results = []

    for _ in range(t):
        n = int(data[idx])
        idx += 1
        sx = int(data[idx])
        idx += 1
        sy = int(data[idx])
        idx += 1
        tx = int(data[idx])
        idx += 1
        ty = int(data[idx])
        idx += 1

        a = []
        for _ in range(n):
            a.append(float(data[idx]))
            idx += 1

        dist = math.hypot(sx - tx, sy - ty)
        a.append(dist)
        a.sort()

        total = a[-1]
        for i in range(n):
            total -= a[i]

        results.append("Yes\n" if total <= 0 else "No\n")

    print(''.join(results))

if __name__ == "__main__":
    main()
