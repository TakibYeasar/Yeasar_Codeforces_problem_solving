
# Problem link ===>> https://codeforces.com/contest/2131/problem/D

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
        n = int(input())
        g = [[] for _ in range(n)]
        deg = [0] * n

        for _ in range(n - 1):
            u, v = map(int, input().split())
            u -= 1
            v -= 1
            g[u].append(v)
            g[v].append(u)
            deg[u] += 1
            deg[v] += 1

        if n <= 3:
            print(0)
            continue

        c1 = sum(deg[u] == 1 for u in range(n))
        mx = max(sum(deg[v] == 1 for v in g[u]) for u in range(n))
        print(c1 - mx)

if __name__ == "__main__":
    main()
