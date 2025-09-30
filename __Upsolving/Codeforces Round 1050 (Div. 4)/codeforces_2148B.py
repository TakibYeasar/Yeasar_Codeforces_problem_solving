
# Problem link ===>> https://codeforces.com/contest/2148/problem/B

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
        n, m, x, y = map(int, input().split())

        # Read n integers
        _ = list(map(int, input().split()))

        # Read m integers
        _ = list(map(int, input().split()))

        print(n + m)
            

if __name__ == "__main__":
    main()
