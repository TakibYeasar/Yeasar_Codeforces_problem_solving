
# Problem link ===>> https://codeforces.com/contest/2148/problem/E

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
    a = list(map(int, input().split()))

    cnt = [0] * (n + 1)
    b = [0] * (n + 1)

    for x in a:
        cnt[x] += 1

    for i in range(n + 1):
        if cnt[i] % k != 0:
            print(0)
            return
        cnt[i] //= k

    res = 0
    l = 0
    for r in range(n):
        b[a[r]] += 1
        while b[a[r]] > cnt[a[r]]:
            b[a[l]] -= 1
            l += 1
        res += (r - l + 1)

    print(res)

if __name__ == "__main__":
    main()
