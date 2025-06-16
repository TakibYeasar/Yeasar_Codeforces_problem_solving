
# Problem link ===>> https://codeforces.com/problemset/problem/2115/A

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

N = 5005
g = [[0]*N for _ in range(N)]


def checkmax(x: int, y: int) -> int:
    return max(x, y)


def checkmin(x: int, y: int) -> int:
    return min(x, y)

def main():
    
    # Precompute GCD transitions
    for x in range(N):
        g[x][0] = g[0][x] = g[x][x] = x
    for x in range(1, N):
        for y in range(1, x):
            g[x][y] = g[y][x] = g[y][x % y]
            
            
    t = int(input())
    for _ in range(t):
        n = int(input())
    a = [0] + list(map(int, input().split()))
    k = 0

    for i in range(1, n+1):
        k = g[k][a[i]]

    f = [int(1e9)] * N
    m = 0

    for i in range(1, n+1):
        a[i] //= k
        m = max(m, a[i])
        f[a[i]] = 0

    for x in range(m, 0, -1):
        for i in range(1, n+1):
            y = a[i]
            f[g[x][y]] = min(f[g[x][y]], f[x] + 1)

    ans = max(f[1] - 1, 0)
    for i in range(1, n+1):
        if a[i] > 1:
            ans += 1

    print(f"{ans}\n")

if __name__ == "__main__":
    main()
