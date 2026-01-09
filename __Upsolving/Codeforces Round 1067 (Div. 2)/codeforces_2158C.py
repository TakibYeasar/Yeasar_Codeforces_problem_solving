
# Problem link ===>> https://codeforces.com/contest/2158/problem/C

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
        b = list(map(int, input().split()))
        
        k &= 1  # reduce to 0/1 game

        # L[i]: max sum subarray ending at i
        L = [0] * n
        for i in range(n):
            L[i] = (L[i - 1] if i > 0 and L[i - 1] > 0 else 0) + a[i]

        # R[i]: max sum subarray starting at i
        R = [0] * n
        for i in range(n - 1, -1, -1):
            R[i] = (R[i + 1] if i + 1 < n and R[i + 1] > 0 else 0) + a[i]

        if k == 0:
            print(max(L))
        else:
            ans = float('-inf')
            for i in range(n):
                ans = max(ans, L[i] + R[i] - a[i] + b[i])
            print(ans)
            

if __name__ == "__main__":
    main()
