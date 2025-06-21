
# Problem link ===>> https://codeforces.com/problemset/problem/2118/B

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
        print(2 * n - 1)
        print(1, 1, n)

        for i in range(2, n + 1):
            print(i, 1, i - 1)
            print(i, i, n)

if __name__ == "__main__":
    main()
