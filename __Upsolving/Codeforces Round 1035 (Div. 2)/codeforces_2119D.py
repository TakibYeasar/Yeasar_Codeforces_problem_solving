
# Problem link ===>> https://codeforces.com/contest/2119/problem/D

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
data = sys.stdin.read().strip().split()
out_lines = []
idx = 0


def add(x: int, y: int, mod: int) -> int:
    x += y
    if x >= mod:
        x -= mod
    return x


def main():
    global idx
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        mod = int(data[idx])
        idx += 1

        # Initialize DP table
        f = [[0] * (n + 2) for _ in range(n + 2)]
        f[0][0] = 1

        # DP transitions
        for i in range(1, n + 1):
            for j in range(i):
                now = f[i - 1][j]
                if now:
                    f[i][j + 1] = add(f[i][j + 1], now, mod)
                    f[i][j] = (f[i][j] + (n - i + 1) * (j + 1) %
                               mod * now % mod) % mod

        # Calculate answer
        ans = 0
        for j in range(n + 1):
            ans = add(ans, f[n][j], mod)

        out_lines.append(str(ans))


if __name__ == "__main__":
    main()
    sys.stdout.write("\n".join(out_lines))
