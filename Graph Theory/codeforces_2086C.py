
# Problem link ===>> https://codeforces.com/problemset/problem/2086/C

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
        n = int(sys.stdin.readline())
        p = list(map(int, sys.stdin.readline().split()))

        X = set()

        d_values = list(map(int, sys.stdin.readline().split()))

        results = []
        for d_val in d_values:
            d = d_val - 1
            while d not in X:
                X.add(d)
                d = p[d]
            results.append(str(len(X)))
        sys.stdout.write(" ".join(results) + "\n")

if __name__ == "__main__":
    main()
