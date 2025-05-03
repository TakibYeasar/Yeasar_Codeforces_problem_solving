
# Problem link ===>> https://codeforces.com/problemset/problem/2094/F

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
    for _ in range(int(input())):
        n, m, k = map(int, input().split())
        LAST = [-1 for _ in range(m)]
        for i in range(n):
            shift = False
            CUR = [0 for _ in range(m)]
            for j in range(m):
                elm = ((i * m + j) % k) + 1
                if elm == LAST[j]:
                    shift = True
                CUR[j] = elm
            if shift:
                CUR = [CUR[(j+1) % m] for j in range(m)]
            print(*CUR)
            LAST = CUR

if __name__ == "__main__":
    main()
