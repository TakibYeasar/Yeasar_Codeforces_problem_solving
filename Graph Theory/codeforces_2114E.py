
# Problem link ===>> https://codeforces.com/problemset/problem/2114/E

import sys
import math
import bisect
import heapq
from collections import defaultdict, deque, OrderedDict, Counter
from functools import lru_cache, reduce
from itertools import permutations, combinations, accumulate
from typing import List, Tuple, Dict, Set, Optional, Union, Any

sys.setrecursionlimit(400_000)

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

        arr = list(map(int, data[idx:idx + n]))
        idx += n

        gr = [[] for _ in range(n)]
        for _ in range(n - 1):
            u = int(data[idx]) - 1
            v = int(data[idx + 1]) - 1
            gr[u].append(v)
            gr[v].append(u)
            idx += 2

        res = [0] * n

        def dfs(v: int, p: int, mini: int, maxi: int):
            res[v] = max(arr[v], -mini + arr[v])
            new_mini = min(arr[v], -maxi + arr[v])
            for u in gr[v]:
                if u != p:
                    dfs(u, v, new_mini, res[v])

        dfs(0, -1, 0, 0)
        results.append(" ".join(map(str, res)))

    print("\n".join(results))


if __name__ == "__main__":
    main()
