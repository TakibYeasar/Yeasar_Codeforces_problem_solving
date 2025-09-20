
# Problem link ===>> https://codeforces.com/contest/2134/problem/C

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
        a = list(map(int, input().split()))
        b = [0] * (n + 1)
        ans = 0
        
        for i in range(0, n, 2):
            mn = a[i]
            if i >= 2:
                mn = min(mn, a[i - 1] - b[i - 2])
            if i + 1 < n:
                mn = min(mn, a[i + 1])
            b[i] = mn
            ans += (a[i] - b[i])
        print(ans)

if __name__ == "__main__":
    main()
