
# Problem link ===>> https://codeforces.com/problemset/problem/2121/D

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
        b = list(map(int, input().split()))

        ans = []

        for i in range(n):
            for j in range(1, n):
                if a[j - 1] > a[j]:
                    a[j - 1], a[j] = a[j], a[j - 1]
                    ans.append((1, j))

        for i in range(n):
            for j in range(1, n):
                if b[j - 1] > b[j]:
                    b[j - 1], b[j] = b[j], b[j - 1]
                    ans.append((2, j))

        for i in range(n):
            if a[i] > b[i]:
                ans.append((3, i + 1))

        print(len(ans))
        for x, y in ans:
            print(x, y)

if __name__ == "__main__":
    main()
